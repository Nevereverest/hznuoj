#include <algorithm>
#include <cstring>
#include <iostream>
#define lowbit(a) (a&(-a))
const int maxn = 5e5 + 10;
int c[maxn], A[maxn];
int n;
struct node
{
	int x, b;
} a[maxn];

bool cmp(node l, node r) {
	return l.x < r.x;
}

void insert(int x, int k) {
	while (x <= n) {
		c[x] += k;
		x += lowbit(x);
	}
}

int getsum(int x) {
	int sum = 0;
	while (x > 0) {
		sum += c[x];
		x -= lowbit(x);
	}
	return sum;
}

int main() {
	while (~scanf("%d", &n), n) {
		memset(c, 0, sizeof(c));
		memset(A, 0, sizeof(A));
		int x;
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i].x);
			a[i].b = i;
		}
		std::sort(a + 1, a + n + 1, cmp);
		for (int i = 1; i <= n; i++)
			A[a[i].b] = i;
		long long ans = 0;
		for (int i = 1; i <= n; i++) {
			insert(A[i], 1);
			ans += i - getsum(A[i]);
		}
		printf("%lld\n", ans);
	}
}
