#include <stdio.h>
int np[1000001];
int main() {
	for (int i = 2; i * i <= 1000000; i++)
		for (int t = 2; i * t <= 1000000; t++)
			np[t * i] = 1;
	np[1] = 1;
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		(np[n]) ? printf("NO\n") : printf("YES\n");
	}
}