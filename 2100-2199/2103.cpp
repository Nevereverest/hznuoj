#include <iostream>
int main(){
	int t;
	std::string s;
	std::cin>>t;
	for(int i=1;i<=t;i++){
		int x;
		double d;
		double sum=0.0;
		std::cin>>x;
		for(int j=1;j<=x;j++){
				std::cin>>d>>s;
				if(s=="km")sum+=1000.0*d;
				if(s=="m")sum+=1.0*d;
				if(s=="cm")sum+=0.01*d;
				if(s=="dm")sum+=0.1*d;
				if(s=="mm")sum+=0.001*d;
			}
		printf("%.3lfm\n",1.0*sum);
	}
}