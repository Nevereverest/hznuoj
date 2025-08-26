#include <iostream>
int main() {
	int i, t, a, ta, b, tb, h, m;
	std::cin >> t;
	while (t--) {
		int s = 0;
		std::cin >> a >> ta >> b >> tb;
		scanf("%d:%d", &h, &m);
		for (i = 300; i < 1439; i += b) {
			if (i > 60 * h + m - tb && i < 60 * h + m + ta) s++;
		}
		std::cout << s << std::endl;
	}
}