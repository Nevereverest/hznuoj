#include <stdio.h>
#include <string.h>
int main() {
	int res[31];
	memset(res, 0, sizeof(res));
	res[0] = 1;
	int cum = 0;
	for (int i = 2; i < 31; i += 2) {
		res[i] = 3 * res[i - 2];
		res[i] += cum * 2;
		cum += res[i - 2];
	}
	int n;
	while (scanf("%d", &n) != EOF && n != -1)printf("%d\n", res[n]);
}
