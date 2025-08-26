#include <algorithm>
#include <iostream>
int main() {
	int n;
	while (std::cin >> n, n) {
		int min, t, sum;
		std::cin >> min;
		sum = min;
		for (int i = 2; i <= n; i++) {
			std::cin >> t;
			sum = sum + t;
			min = std::min(t, min);
		}
		if (min < 2) std::cout << -1 << std::endl;
		else std::cout << sum - min + 2 << std::endl;
	}
}