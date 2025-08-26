#include <iostream>
int main() {
	int n, a[31];
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		int x;
		std::cin >> x;
		a[1] = 1, a[2] = 1;
		for (int i = 3; i <= x; i++) {
			a[i] = a[i - 1] + a[i - 2];
		}
		std::cout << a[x] << std::endl;
	}
}