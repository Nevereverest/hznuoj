#include <stdio.h>
int k, a[10006];
int main() {
	int n, m;
	while (~scanf("%d%d", &n, &m)) {
		k = 0;
		while (m) {
			a[k++] = m % (n + 1);
			m /= (n + 1);
		}
		for (int i = k - 1; i >= 0; i--) {
			if (i != k - 1)printf(" ");
			printf("%d", a[i]);
		}
		printf("\n");
	}
}
