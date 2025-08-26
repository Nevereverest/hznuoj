#include <iostream>
long long int p(int n) {
	int i = 0;
	long long int c[31] = { 0 };
	c[1] = 1;
	c[2] = n;
	for (i = 3; i <= 30; ++i) {
		c[i] = c[i - 1] + 2 * c[i - 2];
	}
	return c[30];
}
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		getchar();
		long long int n;
		std::cin >> n;
		std::cout << p(n) << std::endl;
	}
	return 0;
}