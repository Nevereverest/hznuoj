#include <stdio.h>
int main() {
    int t, a[101][101];
    scanf("%d", &t);
    while (t--) {
        int n, k, count = 1;
        scanf("%d%d", &n, &k);
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (a[i][j] > k)
                    count++;
            }
        }
        printf("%d\n", (count - n) / 2);
    }
}
