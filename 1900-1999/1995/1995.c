#include <stdio.h>
int main() {
	int n;
	char* m[] = { "Oh my God!","January","February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	while (scanf("%d", &n) != EOF) {
		if (n > 12)n = 0;
		printf("%s\n", m[n]);
	}
}