#include <stdio.h>
int main() {
	int n, a[10001], sum[15];
	sum[1] = 1;
	a[1] = 0;
	a[2] = 1;
	a[3] = 2;
	for (int i = 2; i <= 10; i++)sum[i] = i * sum[i - 1];
	for (int i = 4; i <= 10; i++)a[i] = (i - 1) * (a[i - 1] + a[i - 2]);
	while (scanf("%d", &n) != EOF)printf("%.7f\n", 1.0 * a[n] / sum[n]);
}
