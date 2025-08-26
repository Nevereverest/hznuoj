#include <iostream>
int main() {
	int n;
	while (std::cin >> n) {
		int sum = 1;
		int m = 1;
		while (m %= n) {
			m = m * 10 + 1;
			sum++;
		}
		std::cout << sum << std::endl;
	}
}