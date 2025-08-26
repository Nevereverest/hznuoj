#include <stdio.h>
int main() {
	int n;
	while(scanf("%d",&n)!=EOF) {
		int a=1,b=1,k;
		while(b<n) {
			k=b;
			b=a+b;
			a=k;
		}
		if(b==n) printf("mwy win\n");
		else printf("sjy win\n");
	}
}
