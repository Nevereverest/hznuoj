#include <stdio.h>
int x[200000], y[200000];
int main() {
    int n;
    while (~scanf("%d", &n) && n) {
        for (int i = 0; i < n; i++)
            scanf("%d%d", &x[i], &y[i]);
        int x0 = x[n / 2], y0 = y[n / 2], cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            if (x[i] > x0 && y[i] > y0) cnt1++;
            else if (x[i] < x0 && y[i] < y0) cnt1++;
            else if (x[i] < x0 && y[i] > y0) cnt2++;
            else if (x[i] > x0 && y[i] < y0) cnt2++;
        }
        printf("%d %d\n", cnt1, cnt2);
    }
}
