#include <stdio.h>
int main() {
	int s, d, ans;
	while (scanf("%d%d", &s, &d) != EOF) {
		if (4 * s < d) ans = 8 * s - 2 * d + 2 * s;
		else if (3 * s < 2 * d) ans = 6 * s - 4 * d + 2 * s;
		else if (2 * s < 3 * d) ans = 4 * s - 6 * d + 2 * s;
		else if (s < 4 * d) ans = 2 * s - 8 * d + s - d;
		else ans = -1;
		if (ans < 0) printf("Deficit\n");
		else printf("%d\n", ans);
	}
}
