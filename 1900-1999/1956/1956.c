#include <stdio.h>
int main() {
	int n, m;
	while (scanf("%d", &n) != EOF) {
		printf("%d", n);
		(n / 100 != 0) ? printf("rd") : printf("ss");
		(n < 100) ? (m = n / 10) : (m = n / 10 % 10);
		(m == 1 || m == 5 || m == 9) ? printf("nd") : printf("ss");
		n = n % 10;
		(n == 3 || n == 7 || n == 2) ? printf("st\n") : printf("ss\n");
	}
}