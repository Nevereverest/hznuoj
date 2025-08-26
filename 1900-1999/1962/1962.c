#include <stdio.h>
int main() {
    int n, i, j, k;
    while (scanf("%d", &n) == 1) {
        k = 0;
        for (i = 1; i <= n; i++) {
            printf(" ");
            k++;
            for (j = 0; j < n - k; j++)
                printf(" ");
            for (j = 1; j <= i; j++)
                printf("%d", j);
            for (j = i - 1; j > 0; j--)
                printf("%d", j);
            printf("\n");
        }
        for (i = n - 1; i > 0; i--) {
            for (j = 0; j < n - i + 1; j++)
                printf(" ");
            for (j = 1; j <= i; j++)
                printf("%d", j);
            for (j = i - 1; j > 0; j--)
                printf("%d", j);
            printf("\n");
        }
    }
}