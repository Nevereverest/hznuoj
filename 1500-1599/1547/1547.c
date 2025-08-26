#include <stdio.h>
int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int m = n - 265716;
        for (int i = 0; i < 10; i++) {
            if (i == 9) printf("%d\n", 9 + m % 3);
            else printf("%d ", 9 + m % 3);
            m /= 3;
        }
    }
}
