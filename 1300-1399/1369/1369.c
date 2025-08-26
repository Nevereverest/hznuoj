#include <stdio.h>
int t, n, a[30010];
int main(){
	scanf("%d", &t);
	while (t--){
		scanf("%d", &n);
		int ans = 0;
		a[0] = a[n + 1] = -0xfffffff;
		for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
		for (int i = 1; i <= n; i++) if (a[i - 1]<a[i] && a[i]>a[i + 1]) ans++;
		ans *= 2;
		if (a[n - 1] < a[n]) ans--;
		printf("%d\n", ans);
	}
}
