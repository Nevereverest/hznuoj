#include<iostream>
#include<vector>
int main(){
	int n,m,no,t,i;
	std::vector<int> box;
	char operate[10];
	scanf("%d%d",&n,&m);
	t=m;
	while(m--){
		scanf("%s",operate);
		if(operate[1]=='u'){
			scanf("%d",&no);
			if(box.size()==n){
				printf("The queue is full\n");
			}else{
				if(operate[4]=='L'){
					box.insert(box.begin(),no);
					printf("Pushed in left: %d\n",no);
				}else{
					box.push_back(no);
					printf("Pushed in right: %d\n",no);
				}
			}
		}else{
			if(box.empty()){
				printf("The queue is empty\n");
			}else{
				if(operate[3]=='L'){
					printf("Popped from left: %d\n",*box.begin());
					box.erase(box.begin());
				}else{
					printf("Popped from right: %d\n",box.back());
					box.pop_back();
				}
			}
		}
	}
}