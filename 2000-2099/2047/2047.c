#include <stdio.h>
int main() {
    int T, a[5], N, x, b[5], i;
    double c[5], max_dmg = 0, dmg;
    for (scanf("%d", &T); T--;) {
        for (i = 0; i < 5; i++) scanf("%d", &a[i]);
        for (scanf("%d", &N), max_dmg = 0; N--;) {
            scanf("%d", &x);
            for (i = 0; i < 5; i++) scanf("%d", &b[i]);
            for (i = 0; i < 5; i++) scanf("%lf", &c[i]);
            for (dmg = x, i = 0; i < 5; i++) dmg += a[i] * c[i];
            for (i = 0; i < 5; i++) 
                if (a[i] < b[i]) { dmg /= 2; break; }
            if (dmg > max_dmg) max_dmg = dmg;
        }
        printf("%.3f\n", max_dmg);
    }
}