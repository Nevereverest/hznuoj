#include <algorithm>
#include <iostream>
int main() {
	int a, b, c, d, e, sum, m, n, k, x, y;
	while (std::cin >> a >> b >> c >> d >> e) {
		m = a - 2 * e; n = b - 2 * e; k = c - 2 * e;
		if (d < e)sum = a * b * c - 2 * d * (m * n + m * k + n * k);
		else {
			x = (a * b - m * n) * e * 2 + 4 * e * e * k;
			y = (a - 2 * d) * (b - 2 * d) * (c - 2 * d);
			sum = std::max(x, y);
		}
		std::cout << sum << std::endl;
	}
}