#include <iostream>
#include <numeric>
int main() {
	int t, n, a[10000];
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		int from, to, sum;
		std::cin >> from >> to >> sum;
		std::cout << std::accumulate(a + from, a + to + 1, sum) << std::endl;
	}
}