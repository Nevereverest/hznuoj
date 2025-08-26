#include<stdio.h>
int main()
{
	int m, n, i, a, max, b = 0;
	while (scanf("%d%d", &m, &n), m || n)
	{
		for (i = 0, max = 0; i <= m * n - 1; ++i)
		{
			scanf("%d", &a);
			if (a > max)
				max = a;
		}
		printf("Case %d:\n", ++b);
		printf("%d\n\n", max);
	}
}