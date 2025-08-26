#include <stdio.h>
int main() {
    int a, b, i, j, n;
    scanf("%d", &n);
    while (n--) {
        scanf("%d %d", &a, &b);
        for (j = 0; j < a; j++) {
            (j == 0 || j == a - 1) ? printf("X") : printf(" ");
        }
        printf("\n");
        while (b--) {
            for (i = 1; i < a; i++) {
                for (j = 0; j < a; j++) {
                    (i == j || i + j == a - 1) ? printf("X") : printf(" ");
                }
                printf("\n");
            }
        }
        printf("\n");
    }
}
