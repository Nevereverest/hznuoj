#include <stdio.h>
int main() {
	int a[9];
	while (scanf("%d%d%d", &a[0], &a[1], &a[2]) == 3) {
		scanf("%d%d%d", &a[3], &a[4], &a[5]);
		scanf("%d%d%d", &a[6], &a[7], &a[8]);
		printf("%d %d %d\n", a[0], a[3], a[6]);
		printf("%d %d %d\n", a[1], a[4], a[7]);
		printf("%d %d %d\n", a[2], a[5], a[8]);
		printf("\n");
	}
}