#include <algorithm>
#include <iostream>
struct ss {
	double a;
	double b;
	double c;
}s[20];
bool cmp(const ss a, const ss b) {
	return a.c > b.c;
}
int main() {
	int t;
	std::cin >> t;
	while (t--) {
		int n;
		double m;
		std::cin >> n >> m;
		for (int i = 1; i <= n; i++) {
			std::cin >> s[i].a;
		}
		for (int i = 1; i <= n; i++) {
			std::cin >> s[i].b;
			s[i].c = s[i].b / s[i].a;
		}
		std::sort(s + 1, s + 1 + n, cmp);
		int cnt = 1;
		double sum = 0;
		while (m > s[cnt].a && cnt <= n) {
			sum += s[cnt].b;
			m -= s[cnt].a;
			cnt++;
		}
		if (cnt <= n) sum += m * s[cnt].c;
		printf("%.2lf\n", sum + 1e-7);
	}
}
