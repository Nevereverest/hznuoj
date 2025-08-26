#include <iostream>
int main() {
	int n, t, a;
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		int sum = 0;
		for (int i = 1; i <= n; i++) {
			std::cin >> a;
			if (a % 2 == 1) sum += a;
		}
		std::cout << sum << std::endl;
	}
}