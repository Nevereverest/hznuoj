#include <algorithm>
#include <iostream>
int p(int num) {
	if (num == 0) return 1;
	else if (num < 10) return num;
	return  std::max(p(num / 10 - 1) * 9, p(num / 10) * (num % 10));
}
int main() {
	int t, n;
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		std::cout << p(n) << std::endl;
	}
}