#include <algorithm>
#include <iostream>
int main() {
	int a[100000], n;
	while (std::cin >> n, n) {
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		std::sort(a, a + n);
		long long sum = 0;
		for (int i = 1; i < n; i++) {
			sum = sum + (a[i] - a[i - 1]);
		}
		sum = sum + (a[n - 1] - a[0]);
		std::cout << sum << std::endl;
	}
}