#include <stdio.h>
#include <string.h>
int main() {
	char a[100], b[100];
	int m, n, t;
	scanf("%d", &t);
	getchar();
	while (t--) {
		m = 0, n = 0;
		gets(a);
		gets(b);
		for (int i = 0; i < strlen(b); i++) {
			for (int j = 0; j < strlen(a); j++) {
				if (b[i] == ' ') continue;
				if (b[i] == a[j]) { 
					a[j] = '0'; 
					m++; 
					break;
				}
			}
		}
		for (int j = 0; j < strlen(a); j++) if (a[j] == 32) n++;
		(m + n == strlen(a)) ? printf("Yes\n") : printf("No\n");
	}
	printf("\n");
}
