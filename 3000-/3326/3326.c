#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int cur = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c", 'A' + cur % 26);
            cur++;
        }
        printf("\n");
    }
}