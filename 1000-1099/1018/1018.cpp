#include <iostream>
int main() {
	int t, n, k, sum, min, a[1000];
	std::cin >> t;
	while (t--) {
		std::cin >> n;
		for (int i = 0; i < n; i++)
			std::cin >> a[i];
		for (int i = 0; i <= 30000; i++) {
			sum = 0;
			for (int j = 0; j < n; j++)
				sum += abs(i - a[j]);
			if (i == 0 || sum <= min) {
				min = sum;
				k = i;
			}
		}
		std::cout << k << " " << min << std::endl;
	}
}