#include <algorithm>
#include <iostream>
struct s {
	int a;
	int b;
};
bool cmp(const s x, const s y) {
	return x.b < y.b;
}
int main() {
	int t;
	s ss[100];
	while (std::cin >> t && t) {
		for (int i = 0; i < t; i++)
			std::cin >> ss[i].a >> ss[i].b;
		std::sort(ss, ss + t, cmp);
		int end = ss[0].b, c = 1;
		for (int i = 1; i < t; i++)
			if (ss[i].a >= end) { end = ss[i].b; c++; }
		std::cout << c << std::endl;
	}
}
