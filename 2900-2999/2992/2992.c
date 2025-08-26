#include <stdio.h>
long long a[10][100][(1 << 10)];
int c[(1 << 10)], s[(1 << 10)];
int main(){
	int n, k, i, j, t, l, no, cn = 0;
	long long f = 0;
	scanf("%d%d", &n, &k);
	for (i = 0; i < (1 << n); i++) {
		if ((i & (i >> 1)) || (i & (i << 1)))
			continue;
		t = 0;
		for (j = 0; j < n; j++)
			t += ((i >> j) & 1);
		c[cn] = i;
		s[cn++] = t;
	}
	for (i = 0; i < cn; i++)
		a[1][s[i]][i] = 1;
	for (i = 2; i <= n; i++)
		for (j = 0; j <= n * n; j++)
			for (l = 0; l < cn; l++){
				for (no = 0; no < cn; no++){
					if ((c[l] & c[no]) || (c[l] & (c[no] >> 1)) || (c[l] & (c[no] << 1)))
						continue;
					a[i][j + s[no]][no] += a[i - 1][j][l];
				}
			}
	for (i = 0; i < cn; i++) f += a[n][k][i];
	(f) ? printf("%lld\n", f) : printf("jyj died\n");
}