#include <iostream>
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int m, k, x;
		scanf("%x%d%d", &x, &m, &k);
		printf("%08x\n", (x & ((1 << (32 - m)) - 1)) + (k << (32 - m)));
	}
}