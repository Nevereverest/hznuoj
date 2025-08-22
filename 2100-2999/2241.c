#include <stdio.h>
int main() {
    int n, m;
    double H, h, sum;
    while (scanf("%d %d %lf", &n, &m, &H) != EOF) {
        sum = 0.0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%lf", &h);
                if (h < H) sum += (H - h) * 100;
            }
        }
        printf("%d\n", (int)sum);
    }
}