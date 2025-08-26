#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, n, m, ** a;
	scanf("%d%d", &n, &m);
	/*你的代码将会被嵌在这*/
	a = (int**)malloc(n * sizeof(int*));
	for (i = 0; i < n; i++) {
		a[i] = (int*)malloc(m * sizeof(int));
	}
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < m; ++j)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
