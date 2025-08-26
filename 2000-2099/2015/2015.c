#include <stdio.h>
int main() {
	int sum = 0, a;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++) {
			scanf("%d", &a);
			if (i == j || i + j == 4)sum += a;
		}
	printf("%d\n%s", 50 + sum, sum > 100 ? "wo de tian!" : "make monkey!");
}