#include <math.h>
#include <stdio.h>
const double eps = 1e-6;
double f(double x) {
    return x * x / (log(x + 1));
}
int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        double d = 0;
        for (double x = a * 1.0; x <= b * 1.0; x += eps)
            d += f(x) * eps;
        printf("%.2lf\n", d);
    }
}