#include <stdio.h>
int main() {
	int n, a[100000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int s = a[0], max = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] < s) s = a[i];
		if (a[i] - s > max) max = a[i] - s;
	}
	printf("%d", max);
}