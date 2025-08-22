#include <cmath>
#include <iostream>
int main() {
	int a[1000][1000], sum[1000], n, summ = 0;
	std::cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			std::cin >> a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			sum[i] = sum[i] + a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		summ = summ + pow(sum[i], 2);
	}
	std::cout << summ;
}