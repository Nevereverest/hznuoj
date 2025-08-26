#include <stdio.h>
int main() {
    int a[10][10], i, j, n, k;
    while (scanf("%d", &n) != EOF) {
        for (i = 0; i < n; i++) {
            for (j = 0; j <= i; j++) {
                if (j == 0 || j == i)a[i][j] = 1;
                else a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
        for (i = n - 1; i >= 0; i--) {
            for (k = n - 1 - i; k > 0; k--)printf(" ");
            for (j = 0; j < i; j++)printf("%d ", a[i][j]);
            printf("%d\n", a[i][j]);
        }
        printf("\n");
    }
}
