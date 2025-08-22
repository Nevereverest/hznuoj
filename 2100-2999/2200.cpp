#include <algorithm>
#include <iostream>
struct s{
	int x;
	int sum;
};
bool cmp(const s s1,const s s2){
	if(s1.sum==s2.sum)return s1.x<s2.x;
	return s1.sum<s2.sum;
}
int main(){
	s ss[1000000];
	for(int i=0;i<1000000;i++){
		ss[i].x=i;
		ss[i].sum=0;
		int t=ss[i].x;
		for(int j=0;;j++){
			ss[i].sum=ss[i].sum+t%10;
			if(t%10==0&&t/10==0)break;
			t=t/10;
		}
	}
	std::sort(ss,ss+1000000,cmp);
	for(int i=0;i<1000000;i++){
		printf("%06d\n",ss[i].x);
	}
}