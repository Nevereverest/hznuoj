#include <stdio.h>
int main() {
	int n, T;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		(n % 3 == 0 && n % 2 == 0) ? printf("%d divisible by 2 and 3? 1\n", n) : printf("%d divisible by 2 and 3? 0\n", n);
		(n % 3 == 0 || n % 2 == 0) ? printf("%d divisible by 2 or 3? 1\n", n) : printf("%d divisible by 2 or 3? 0\n", n);
		(n % 3 == 0 && n % 2 != 0) || (n % 3 != 0 && n % 2 == 0) ? printf("%d divisible by 2 or 3, but not both? 1\n", n) : printf("%d divisible by 2 or 3, but not both? 0\n", n);
	}
}