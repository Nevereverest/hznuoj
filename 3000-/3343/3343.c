#include <stdio.h>
int main() {
    int t, x;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &x);
        int min = 10;
        while (x) {
            int d = x % 10;
            if (d < min) min = d;
            x /= 10;
        }
        printf("%d\n", min);
    }
}