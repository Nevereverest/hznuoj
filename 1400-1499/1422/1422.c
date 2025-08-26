#include <math.h>
#include <stdio.h>
const double C = 90.0 / acos(0);
int main() {
	int a, b, s, m, n;
	while (scanf("%d%d%d%d%d", &a, &b, &s, &m, &n), a)
		printf("%.2f %.2f\n", C * atan((double)b * n / a / m), hypot(b * n, a * m) / s);
}
