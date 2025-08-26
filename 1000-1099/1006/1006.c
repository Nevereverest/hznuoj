#include<stdio.h>
int main()
{
    long long int x, n, a, t = 1, i, has;
    while (scanf("%lld %lld", &n, &x) != EOF) {
        if (t != 1) printf("\n");
        printf("Case %lld:\n", t);
        has = 0;
        for (i = 0; i < n; i++) {
            scanf("%lld", &a);
            if (a != x) {
                printf("%lld ", a);
                has += 1;
            }
        }
        if (has == 0) printf("Empty!");
        printf("\n");
        t++;
    }
}