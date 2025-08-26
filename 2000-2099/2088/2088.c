#include <stdio.h>
int main() {
	char c;
	int a = 1;
	while ((c = getchar()) != EOF) {
		if (c == '"') {
			a = !a;
			if (a == 1) printf("\"");
		}
		if (a == 0) continue;
		printf("%c", c);
	}
}