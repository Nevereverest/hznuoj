#include <math.h>
#include <stdio.h>
#define PI 2*asin(1)
int main() {
    double l, w, r, a, v, s;
    double x, y, px, py;
    while (scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &l, &w, &x, &y, &r, &a, &v, &s) && r) {
        l = l - r;
        w = w - r;
        px = x + v * cos(a / 180 * PI) * s;
        py = y + v * sin(a / 180 * PI) * s;
        while (px<0 || px>l) {
            if (px < 0) px = r + r - px;
            else px = l + l - px;
        }
        while (py<0 || py>w) {
            if (py < 0) py = r + r - py;
            else py = w + w - py;
        }
        printf("%.2lf %.2lf\n", px, py);
    }
}
