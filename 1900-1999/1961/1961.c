#include <stdio.h>
int main() {
	int n, x = 0;
	scanf("%d", &n);
	while (n) {
		if (n % 10 == 4 || n % 10 == 7) {
			x = x + 1;
			n = n / 10;
		}
		else break;
	}
	while (x) {
		if (x % 10 == 4 || x % 10 == 7) x = x / 10;
		else break;
	}
	if (n == 0 && x == 0) printf("YES");
	else printf("NO");
}