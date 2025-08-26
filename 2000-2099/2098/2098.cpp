#include <iostream>
#include <cmath>
int g(int m, int n) {
	return n == 0 ? m : g(n, m % n);
}
int main() {
	int n, p = 0, q = 1;
	std::cin >> n;
	while (n--) {
		int a, c;
		char b;
		std::cin >> a >> b >> c;
		int x = g(q, c);
		int t = q * c / x;
		p = p * (c / x) + a * (q / x);
		q = t;
	}
	int k = g(p, q);
	p = p / k; q = q / k;
	if (p != 0) {
		if (fabs(p) > fabs(q)) std::cout << p / q << " " << p - p / q * q << "/" << fabs(q) << std::endl;
		else if (fabs(p) == fabs(q)) std::cout << p / q << std::endl;
		else std::cout << p << "/" << q << std::endl;
	}
	else std::cout << "0" << std::endl;
}