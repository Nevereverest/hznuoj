#include <iostream>
int main() {
	int n, start = 0, a[101][101], m = 1;
	std::cin >> n;
	int i, j;
	for (int k = 0; k < n; k++) {
		for (i = 0; i < n; i++) {
			j = k - i;
			if (j >= 0) {
				a[i][j] = m;
				m++;
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i; j++) {
			if (i + j == n - 1)std::cout << a[j][i] << " " << std::endl;
			else std::cout << a[j][i] << " ";
		}
	}
}