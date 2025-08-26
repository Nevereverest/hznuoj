#include <stdio.h>
int main() {
    int n, s, a[1000] = { 0 }, i, b;
    double sum, t;
    scanf("%d", &n);
    while (n--) {
        t = 0;
        scanf("%d", &s);
        for (sum = i = 0; i < s; i++) {
            scanf("%d", &a[i]);
            sum += a[i];
        }
        sum /= s;
        for (t = i = 0; i < s; i++)
            if (a[i] > sum)t++;
        printf("%.3f%%\n", t / s * 100);
    }
}
