#include <algorithm>
#include <iostream>
int a[100020];
int main() {
	int n;
	std::cin >> n;
	for (int i = 1; i <= n; i++)
		std::cin >> a[i];
	std::sort(a + 1, a + 1 + n);
	for (int i = n - 1; i >= 1; i--) {
		if (a[n] % a[i] != 0) {
			long long res = a[n] + a[i];
			printf("%lld\n", res);
			return 0;
		}
	}
	printf("%d\n", a[n]);
}