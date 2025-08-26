#include <stdio.h>
int main() {
    int t, a, sum, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        sum = 1 - n;
        for (int i = 0; i < n; i++){
            scanf("%d", &a);
            sum += a;
        }
        printf("%d\n", sum);
    }
}
