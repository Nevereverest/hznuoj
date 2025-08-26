#include <stdio.h>
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		n++;
		while (1) {
			int a, b, c, d;
			d = n % 10;
			c = (n % 100) / 10;
			b = (n % 1000) / 100;
			a = n / 1000;
			if (a == b || a == c || a == d || b == c || b == d || c == d)n++;
			else break;
		}
		printf("%d\n", n);
	}
}
