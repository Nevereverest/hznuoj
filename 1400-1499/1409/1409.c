#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int i, t;
	double x;
	char a[9];
	while (gets(a), strcmp(a, "END")) {
		x = atof(a);
		t = 0;
		if (x == 0 || x == 1) printf("MEMBER\n");
		else {
			i = 13;
			while (i--) {
				x = (x - (int)x) * 3;
				if ((int)x == 1) {
					printf("NON-MEMBER\n");
					t++;
					break;
				}
			}
			if (t == 0) printf("MEMBER\n");
		}
	}
}
