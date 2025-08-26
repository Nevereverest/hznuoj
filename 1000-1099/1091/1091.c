#include <stdio.h>
const int N = 1000000;
int main() {
    long long n;
    while (~scanf("%lld", &n) && n > 0) {
        int i;
        for (i = 2; i <= n && i <= N; i++)
            while (n % i == 0) {
                n /= i;
                printf("    %d\n", i);
            }
        if (i > N) printf("    %lld\n", n);
        printf("\n");
    }
}
