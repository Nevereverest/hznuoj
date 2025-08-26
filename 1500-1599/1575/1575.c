#include <stdio.h>
int main(){
    long long num[60];
    num[1] = 1;
    num[2] = 1;
    num[3] = 2;
    num[4] = 4;
    num[5] = 6;
    num[6] = 9;
    num[7] = 14;
    num[8] = 21;
    num[9] = 31;
    num[10] = 46;
    for (int i = 11; i <= 55; i++)
        num[i] = num[i - 1] + num[i - 3] + 1;
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", num[n]);
}
