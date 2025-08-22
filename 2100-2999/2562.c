#include <stdio.h>
#include <string.h>

int f[100001];
int b[100001];

int get(int x) {
    if (x == f[x]) return x;
    return f[x] = get(f[x]);
}

void join(int x, int y) {
    f[get(x)] = get(y);
}

int main() {
    int n, m, u, v;
    while (scanf("%d %d", &n, &m) != EOF) {
        int sum = 0;
        memset(b, 0, sizeof(b));
        for (int i = 1; i <= n; i++) {
            f[i] = i;
        }
        for (int i = 0; i < m; i++) {
            scanf("%d %d", &u, &v);
            join(u, v);
        }
        for (int i = 1; i <= n; i++) {
            b[get(i)]++;
        }
        for (int i = 1; i <= n; i++) {
            if (b[i] > sum) {
                sum = b[i];
            }
        }
        printf("%d\n", sum);
    }
}