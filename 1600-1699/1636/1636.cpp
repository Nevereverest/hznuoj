#include <cstring>
#include <iostream>
int main() {
	int n;
	int f[1005];
	memset(f, 0, sizeof(f));
	std::cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i / 2; j++)
			f[i] = f[j] + f[i];
		f[i] = f[i] + 1;
	}
	std::cout << f[n] << std::endl;
}