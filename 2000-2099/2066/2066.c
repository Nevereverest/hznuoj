#include <stdio.h>
#include <string.h>
char p(char a, char b) {
	return a == b ? '1' : '0';
}
int main()
{
	int t;
	char a[2000];
	scanf("%d", &t);
	getchar();
	while (t--) {
		scanf("%s", a);
		int len = strlen(a);
		while (len > 1) {
			for (int i = 0; i < len; i += 2)
				a[i / 2] = p(a[i], a[i + 1]);
			len /= 2;
		}
		printf("%c\n", a[0]);
	}
}
