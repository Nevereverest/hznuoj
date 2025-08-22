#include <algorithm>
#include <iostream>
int main(){
	int n,k,a,b;
	std::cin>>n>>k;
	while(k--){
		std::cin>>a>>b;
		if(std::__gcd(a,b)!=1)std::cout<<2<<std::endl;
		else std::cout<<1<<std::endl;
	}
}