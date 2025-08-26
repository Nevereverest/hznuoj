#include <algorithm>
#include <iostream>
int main() {
	int n, a[3000], i, flag;
	while (std::cin >> n && n) {
		flag = 0;
		for (i = 0; i < n; i++)
			std::cin >> a[i];
		std::sort(a, a + n);
		if (a[0] > 200 || a[n - 1] < 1322) flag = 1;
		else {
			for (i = 0; i < n - 1; i++) {
				if (a[i + 1] - a[i] > 200) {
					flag = 1;
					break;
				}
			}
		}
		(flag == 1) ? printf("IMPOSSIBLE\n") : printf("POSSIBLE\n");
	}
}
