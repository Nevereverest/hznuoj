#include <algorithm>
#include <iostream>
#include <vector>
int main() {
	int t, n, a[10001];
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		for (int i = 0; i < n; i++) {
			std::cin >> a[i];
		}
		std::sort(a, a + n);
		std::vector<int> v(a, a + n);
		int time;
		std::cin >> time;
		while (time--) {
			int num;
			std::cin >> num;
			if (std::binary_search(v.begin(), v.end(), num))
				std::cout << "Yes" << "\n";
			else
				std::cout << "No" << "\n";
		}
	}
}