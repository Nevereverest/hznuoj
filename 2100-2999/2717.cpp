#include <iomanip>
#include <iostream>
int main() {
	int n;
	std::cin >> n;
	while (n--) {
		int a, b, sum1 = 0, sum2 = 0;
		for (int i = 1; i <= 3; i++) {
			std::cin >> a >> b;
			sum1 += a;
			sum2 += a * b;
		}
		std::cout << std::fixed << std::setprecision(2) << (double)sum2 / sum1 << std::endl;
	}
}