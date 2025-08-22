#include <iostream>
int main() {
	int n, m, mon = 640;
	while (std::cin >> n >> m) {
		int a[1010];
		for (int i = 1; i <= m; i++) {
			std::cin >> a[i];
		}
		for (int i = 1; i <= m; i++) {
			if (n < mon) break;
			n = n - mon + a[i];
		}
		if (n < 0) n = 0;
		std::cout << n << std::endl;
	}
}
