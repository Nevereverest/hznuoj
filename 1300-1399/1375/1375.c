#include <stdio.h>
long long pow_mod(long long a, long long b, long long m) {
	long long res = 1;
	while (b) {
		if (b & 1)res = (res * a) % m;
		a = (a * a) % m;
		b >>= 1;
	}
	return res;
}
int prime(long long n) {
	if (n == 2)return 1;
	for (long long i = 2; i * i < n; i++)
		if (n % i == 0)
			return 0;
	return 1;
}
int main() {
	long long p, a;
	while (scanf("%lld%lld", &p, &a) != EOF && (p + a)) {
		if (!prime(p) && pow_mod(a, p, p) == a)printf("yes\n");
		else printf("no\n");
	}
}
