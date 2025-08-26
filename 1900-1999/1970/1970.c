#include<stdio.h>
int isPrime(int x);
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (isPrime(n))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}

int isPrime(int x)
{
    int i, count = 0;
    if (x == 1) return 0;
    if (x == 2) return 1;
    if (x > 2) {
        for (i = 2; i < x; i++) {
            if (x % i == 0) {
                count++;
            }
        }
        if (count == 0)
            return 1;
        else
            return 0;
    }
}