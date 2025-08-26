#include <stdio.h> 
char a[100000001];
int main() {
	int n, i, j, p, f;
	a[0] = 0;
	a[1] = 0;
	while (scanf("%d", &n), n) {
		for (i = 2; i <= n; i++) a[i] = 1;
		p = 0;
		for (i = 2; i <= n; i++) {
			if (a[i]) {
				p++;
				for (j = 2 * i; j <= n; j += i) a[j] = 0;
			}
		}
		printf("%d\n", p);
	}
}
