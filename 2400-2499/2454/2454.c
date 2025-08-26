#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	int s, w, l;
	s = n / 4;
	if (n % 4 == 0) printf("4元的笔%d支\n", s);
	else {
		w = n % 4 % 2; l = n % 4 / 2;
		s = s - w - l;
		if (w != 0 && l != 0) printf("4元的笔%d支 5元的笔%d支 6元的笔%d支\n", s, w, l);
		else if (w == 0 && l != 0) printf("4元的笔%d支 6元的笔%d支\n", s, l);
		else if (w != 0 && l == 0) printf("4元的笔%d支 5元的笔%d支\n", s, w);
	}
}