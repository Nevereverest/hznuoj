#include <cmath>
#include <iostream>
int main() {
	int n;
	while (std::cin >> n, n) {
		int w = 0;
		while (pow(2, w) < n)
			w++;
		std::cout << w - 1 << std::endl;
	}
}