#include <iostream>
int main() {
	int sum, n;
	sum = 0;
	int rmb[] = { 1, 2, 5, 10, 20, 50, 100 };
	std::cin >> n;
	int i;
	for (i = 6; i >= 0; --i) {
		sum += n / rmb[i];
		n %= rmb[i];
		if (n == 0) break;
	}
	std::cout << sum << std::endl;
}