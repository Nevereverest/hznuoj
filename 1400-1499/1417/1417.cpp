#include <algorithm>
#include <iostream>
int a[100000], b[100000];
int main() {
	int n, m;
	while (std::cin >> n >> m) {
		if (n == 0 && m == 0)break;
		for (int i = 0; i < n; i++)
			std::cin >> a[i];
		for (int i = 0; i < m; i++)
			std::cin >> b[i];
		std::sort(a, a + n);
		std::sort(b, b + n);
		int sum = 0, num;
		for (int i = 0; i < n; i++) {
			num = std::lower_bound(b, b + n, a[i]) - b;
			if (b[num] == a[i])sum++;
		}
		std::cout << sum << std::endl;
	}
}
