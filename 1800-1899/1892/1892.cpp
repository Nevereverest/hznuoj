#include <iostream>
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		std::cin >> n;
		if (n < 15) puts("-1");
		else std::cout << n - 7 << std::endl;;
	}
}
