#include <iostream>
int main() {
	int n;
	while (std::cin >> n) {
		long long sum = 1;
		for (int i = 1; i <= n - 1; i++)
			sum = (sum + 1) * 2;
		std::cout << sum << std::endl;
	}
}