#include <iostream>
int main() {
	int f[50], i, n;
	std::cin >> n;
	f[1] = 1; f[2] = 1; f[3] = 1;
	for (i = 4; i <= n; i++)
		f[i] = f[i - 3] + f[i - 1];
	std::cout << f[n] << std::endl;
}