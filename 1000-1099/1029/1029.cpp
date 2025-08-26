#include <algorithm>
#include <iostream>
int main() {
	int n, a[10000];
	while (std::cin >> n) {
		if (n == 0)return 0;
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		std::sort(a, a + n);
		int temp = std::unique(a, a + n) - a;
		std::cout << temp << std::endl;
		for (int i = 0; i < temp; i++) {
			std::cout << a[i] << " ";
		}
		std::cout << std::endl;
	}
}