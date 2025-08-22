#include <iostream>
int main() {
	int n, m, s, a;
	while (std::cin >> n) {
		s = 0, a = 0;
		while (n--) {
			std::cin >> m;
			s += m > 0 ? m / 2 : m;
			a += s < 0 ? 1 : 0;
		}
		std::cout << a << std::endl;
	}
}