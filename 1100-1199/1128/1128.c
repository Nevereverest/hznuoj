#include <stdio.h>
#include <string.h>
int a[20], b[20];
void MoveBack(int n, int m) {
    for (int i = 1; i < m; i++)
        a[i] = a[i + 1];
    a[m] = n;
}
void DelTop(int m) {
    for (int i = 1; i <= m; i++)
        a[i] = a[i + 1];
}
int main()
{
    int i, j, n, m, k, v, x, flag;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &m);
        for (i = 1; i <= m; i++)
            a[i] = i;
        x = 1; k = 1; flag = m;
        while (m) {
            v = x;
            while (v--)
                MoveBack(a[1], m);
            b[a[1]] = k++;
            DelTop(m--);
            x++;
        }
        printf("%d", b[1]);
        for (i = 2; i <= flag; i++)
            printf(" %d", b[i]);
        puts("");
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
    }
}
