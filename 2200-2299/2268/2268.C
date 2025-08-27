#include <stdio.h>
#include <string.h>
int main(){
    int n,q,a,b,t,vc[110];
    while(scanf("%d%d",&n,&q)!=EOF){
        memset(vc,-1,sizeof(vc));
        while(q--){
            scanf("%d",&t);
            if(t==1) scanf("%d%d",&a,&b), vc[a]=b;
            else scanf("%d",&a), printf(vc[a]!=-1?"%d\n":"UMR!!!\n",vc[a]);
        }
    }
}