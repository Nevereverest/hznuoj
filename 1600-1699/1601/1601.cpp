#include <iostream>
int main() {
	int n, a[105][105] = { 0 };
	std::cin >> n;
	int y = n;
	int x = 1;
	int k = 1;
	a[x][y] = k;
	while (k < n * n) {
		while (x < n && !a[x + 1][y])
			a[++x][y] = ++k;
		while (y - 1 >= 1 && !a[x][y - 1])
			a[x][--y] = ++k;
		while (x - 1 >= 1 && !a[x - 1][y])
			a[--x][y] = ++k;
		while (y + 1 <= n && !a[x][y + 1]) a[x][++y] =
			++k;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < n; j++) {
			std::cout << a[i][j] << " ";
		}
		std::cout << a[i][n] << std::endl;
	}
	return 0;
}

