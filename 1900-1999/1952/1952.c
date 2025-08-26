#include <stdio.h>
int main() {
	int n, a, b, i, j, flag;
	flag = 0;
	scanf("%d", &n);
	for (i = 0; i <= n / 4; i++) {
		a = (n - 4 * i) % 7;
		b = (n - 4 * i) / 7;
		if (a == 0) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		for (j = 0; j < i; j++)
			printf("4");
		for (j = 0; j < b; j++)
			printf("7");
	}
	else
		printf("-1");
}