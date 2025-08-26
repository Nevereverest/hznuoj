#include <stdio.h>
int main() {
	char c, d;
	while ((c = getchar()) != EOF) {
		if (d != c) printf("%c", c);
		d = c;
	}
}