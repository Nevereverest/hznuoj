#include <stdio.h>
int main() {
    long long a[50]={0};
    a[1]=2;a[2]=4;a[3]=7;
    for(int i=4;i<41;i++)a[i]=a[i-1]+a[i-2]+a[i-3]; 
    int n;
    while(scanf("%d",&n)!=EOF)printf("%lld\n",a[n]);
}
