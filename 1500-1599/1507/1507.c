#include <stdio.h>
int main() {
    int n, k, r0, r1;
    scanf("%d", &n);
    scanf("%d", &k);
    r1 = k - 1, r0 = 1;
    for (int i = 2; i <= n; i++) {
        int last = r1;
        r1 = (k - 1) * (r1 + r0);
        r0 = last;
    }
    printf("%d\n", r1);
}
