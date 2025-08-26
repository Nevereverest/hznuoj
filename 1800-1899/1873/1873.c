#include <math.h>
#include <stdio.h>
int main() {
	long long n, k, sum = 1, fin;
	scanf("%lld%lld", &n, &k);
	fin = k;
	k = pow(10, k);
	for (int i = 1; i <= n; i++) {
		sum *= i;
		while (sum % 10 == 0) {
			sum = sum / 10;
		}
		sum = sum % (long long)pow(10, 12);
	}
	sum %= k;
	printf("%0*lld", fin, sum);
}
