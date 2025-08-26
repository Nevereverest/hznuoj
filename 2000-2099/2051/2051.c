#include <stdio.h>
int cost(int n) {
	if (n == 1 || n == 0) return 0;
	else if (n % 2 == 0)
		return 2 * cost(n / 2) + n;
	else if (n % 2 == 1)
		return cost(n / 2) + cost(n / 2 + 1) + n;
}
int main() {
	int n;
	scanf("%d", &n);
	while (n--) {
		int a;
		scanf("%d", &a);
		printf("%d\n", cost(a));
	}
}