#include <iostream>
int main() {
	std::ios::sync_with_stdio(false);
	int n, sum, a;
	while (std::cin >> n, n) {
		sum = 0;
		for (int i = 0; i < n; i++) {
			std::cin >> a;
			sum += a;
		}
		std::cout << sum << std::endl;
	}
}