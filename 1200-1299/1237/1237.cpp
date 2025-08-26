#include <iostream>
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int a, b;
		std::cin >> a >> b;
		int s = 1;
		while (1) {
			if (a >= b) {
				std::cout << 2 * (s - 1) << std::endl;
				break;
			}
			else if (b - a <= s) {
				std::cout << 2 * (s - 1) + 1 << std::endl;
				break;
			}
			else
				a = a + s, b = b - s, s++;
		}
	}
}