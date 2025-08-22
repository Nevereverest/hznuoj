#include <iostream>
int main(){
	int t,x,y,n;
	std::cin>>t;
	while(t--){
		std::cin>>n;
		if(n==1) std::cout<<"WA"<<std::endl;
		if(n>1){
			for(x=0;n-2*x>0;x++){
				if((n-2*x)%3==0) break;
			}
			std::cout<<x<<" "<<(n-2*x)/3<<std::endl;
		}
	}
}