#include <iostream>
int main() {
	int  t, i;
	int a[1010], maxx, minn, n;
	std::cin >> t;
	while (t--) {
		maxx = -1, minn = 10000;
		std::cin >> n;
		for (i = 1; i <= n; ++i) {
			std::cin >> a[i];
		}
		a[0] = a[n + 1] = 0;
		for (i = 1; i <= n; ++i) {
			if (a[i] >= a[i - 1] && a[i] >= a[i + 1]) {
				if (a[i] > maxx) maxx = a[i];
				if (a[i] < minn) minn = a[i];
			}
		}
		std::cout << minn << " " << maxx << std::endl;
	}
}
