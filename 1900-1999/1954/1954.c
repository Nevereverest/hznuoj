#include <stdio.h>
int main() {
	int T, a, b, c, Pa, Pi, i, j, k;
	scanf("%d", &T);
	while (T--) {
		scanf("%d%d%d", &a, &b, &c);
		Pa = 0;
		Pi = 0;
		for (i = 1; i <= c; i++)
			Pa += 50 * ((i - 1) * 2 + 1);
		for (j = c + 1; j <= c + b; j++)
			Pa += 100 * ((j - 1) * 2 + 1);
		for (k = c + b + 1; k <= c + b + a; k++)
			Pa += 300 * ((k - 1) * 2 + 1);
		for (i = 1; i <= a; i++)
			Pi += 300 * ((i - 1) * 2 + 1);
		for (j = a + 1; j <= a + b; j++)
			Pi += 100 * ((j - 1) * 2 + 1);
		for (k = a + b + 1; k <= c + b + a; k++)
			Pi += 50 * ((k - 1) * 2 + 1);
		printf("%d %d\n", Pi, Pa);
	}
}