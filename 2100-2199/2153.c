#include <stdio.h>
int main() {
	int t, s, a, n;
	scanf("%d", &t);
	while (t--) {
		s = 0;
		scanf("%d", &n);
		while (n--) {
			scanf("%d", &a);
			s += a;
		}
		printf("%d\n",(s - 1) % 9 + 1);
	}
}