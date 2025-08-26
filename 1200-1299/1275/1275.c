#include <math.h>
#include <stdio.h>
const double pi = acos(-1.0);
int main() {
	double d, v;
	while (scanf("%lf %lf", &d, &v) && (d || v)) {
		double t = d * d * d - 6 * v / pi;
		printf("%.3f\n", pow(t, 1.0 / 3.0));
	}
}
