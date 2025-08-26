#include <algorithm>
#include <cmath>
#include <iostream>
int main(){
	int a,b,n=0;
	std::cin>>a>>b;
	if(a==b)n--;
	int c=a*b;
	for(int i=1;i<=sqrt(c);i++)
		if(c%i==0&&std::__gcd(i,c/i)==a)n=n+2;
	std::cout<<n<<std::endl;
}
