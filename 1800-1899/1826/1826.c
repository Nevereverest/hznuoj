#include <stdio.h>
#include <string.h>
int main(void) {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char a[110][110];
        int b[110] = { 0 };
        for (int i = 0; i < n; i++) {
            scanf("%s", a[i]);
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (strcmp(a[i], a[j]) == 0) {
                    b[i]++; b[j]++;
                }
            }
        }
        int max = b[0];
        for (int i = 0; i < n; i++) {
            if (b[i] > max) max = b[i];
        }
        printf("%d\n", max + 1);
    }
}
