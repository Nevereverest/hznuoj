#include <stdio.h>
int main() {
	int n, m, k;
	int a[20][20], b[20][20], c[20][20];
	scanf("%d%d%d", &n, &m, &k);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < k; j++)
			scanf("%d", &b[i][j]);
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			c[i][j] = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++)
			for (int z = 0; z < m; z++)
				c[i][j] += a[i][z] * b[z][j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < k; j++) {
			printf("%d ", c[i][j]);
			if (j == k - 1) printf("\n");
		}
}