#include <stdio.h>
int main() {
    int t, n, a[100001], b[100001];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int valid = 1;
            for (int j = 0; j < i && valid; j++) 
                if (a[j] >= a[i]) valid = 0;
            for (int j = i+1; j < n && valid; j++) 
                if (a[j] <= a[i]) valid = 0;
            if (valid) b[sum++] = a[i];
        }
        printf("%d\n", sum);
        for (int i = 0; i < sum; i++) 
            printf("%d%c", b[i], i < sum-1 ? ' ' : '\n');
        if (!sum) printf("\n");
    }
}