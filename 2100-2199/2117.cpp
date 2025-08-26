#include <iostream>
int main() {
	long long m, n;
	while (std::cin >> m >> n) {
		long long sum = 0;
		for (long long i = 1; i <= m; i++)sum = sum + (i + n) / 5 - i / 5;
		std::cout << sum << std::endl;
	}
}