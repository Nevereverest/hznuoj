#include <stdio.h>
int main() {
    int i, j, x, a, b, n[20], m[20];
    double c, e, d[20];
    while (scanf("%d%d", &a, &b) != EOF) {
        if (!a && !b)break;
        for (i = 0; i < a; i++) scanf("%d%d", &n[i], &m[i]);
        for (i = 0; i < a; i++) d[i] = (double)m[i] / (double)n[i];
        c = 0;
        e = 0;
        for (x = 0; x < a; x++) {
            for (i = j = 0; i < a; i++) if (d[j] < d[i])j = i;
            if ((e + n[j]) >= b) { i = (b - e); c += d[j] * i; break; }
            else if (d[j] == 0)break;
            else { e += n[j]; c += m[j]; }
            d[j] = 0;
        }
        printf("%.2f\n", c);
    }
}
