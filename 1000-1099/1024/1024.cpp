#include <algorithm>
#include <iostream>
int main() {
	long long n, m;
	while (std::cin >> n >> m) {
		int* a = (int*)malloc(n * sizeof(int));
		for (int i = 0; i < n; i++)
			std::cin >> a[i];
		std::sort(a, a + n);
		for (int i = a[n - 1] - 1; i > a[n - 1] - m; i--) {
			int ans = 0, left = 0, right = n - 1;
			while (right - left >= 8 && a[left] != a[right]) {
				int mid = (left + right) / 2;
				if (a[mid] <= i) left = mid;
				else right = mid;
			}
			for (int j = left + 1; j < n; j++)
				if (a[j] > i)
					ans += a[j] % i;
			if (ans >= m) {
				std::cout << i << std::endl;
				break;
			}
		}
	}
}
