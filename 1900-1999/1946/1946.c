#include <stdio.h>
int main() {
    int a, b, c, d, AK, g;
    double x, M;
    while (scanf("%d%d%d%d%lf%d%d", &a, &b, &c, &d, &M, &AK, &g) == 7)
    {
        x = 0;
        if (AK == 1)
            x += 5;
        if (g == 1)
            x += 5;
        else if (g == 2)
            x += 3;
        else if (g == 3)
            x += 1;
        if (a != 0)
            x += M / a;
        if (b != 0)
            x += M / b;
        if (c != 0)
            x += M / c;
        if (d != 0)
            x += M / d;
        printf("%.2f\n", x);
    }
}