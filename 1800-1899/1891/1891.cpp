#include <algorithm>
#include <iostream>
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int a[105];
		int n, m, ans = 0;
		std::cin >> n >> m;
		for (int i = 0; i < m; i++)
			std::cin >> a[i];
		std::sort(a, a + m);
		for (int i = 0; i < m; i++) {
			if (n >= a[i]) {
				ans++;
				n -= a[i];
			}
		}
		std::cout << ans << std::endl;
	}
}
