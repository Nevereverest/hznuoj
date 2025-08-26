#include <stdio.h>
#include <string.h>
int main(){
    char change[]="*123*12**22455*12623*1*2*2";
    char s[21];
    while(scanf("%s",s)!=EOF){
        char temp,prev='0';
        for(int i=0;i<strlen(s);i++){
            temp=change[s[i]-'A'];
            if(temp=='*'){
                prev='0';
                continue;
            }
            if(temp==prev) continue;
            printf("%c",temp);
            prev=temp;
        }
        printf("\n");
    }
}
