#include <stdio.h>
int main() {
    int day[63] = {0};
    int i, k, t;
    for (i = 1, k = 1; i < 63; k++, i += k)
        day[i] = 1;
    while (scanf("%d/%d", &i, &k) == 2 && i != 0 && k != 0) {
        t = 0;
        if (i == 8)
            k += 31;
        for (; k < 63; k++)
            if (day[k])
                t++;
        printf("%d\n", t);
    }
}