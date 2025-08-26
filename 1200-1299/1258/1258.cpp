#include <iostream>
int main() {
	int h, m, s;
	double sum = 0, nowv = 0, nowtime = 0, time = 0;
	while (scanf("%d:%d:%d", &h, &m, &s) != EOF) {
		char c;
		c = getchar();
		time = h * 3600 + m * 60 + s;
		if (c == ' ') {
			int v;
			std::cin >> v;
			sum = sum + (time - nowtime) / 3600 * nowv;
			nowtime = time;
			nowv = v;
		}
		else {
			printf("%02d:%02d:%02d", h, m, s);
			printf(" %.2f km\n", sum + (time - nowtime) / 3600 * nowv);
		}
	}
}