#include <stdio.h>
#include <string.h>
int h[1000002];
int main() {
    memset(h, 0, sizeof(h));
    for (int i = 5; i <= 1000001; i += 4)
        for (int j = 5; i * j <= 1000001; j += 4)
            if (h[i] == 0 && h[j] == 0)
                h[i * j] = 1;
            else
                h[i * j] = -1;
    int count = 0;
    for (int i = 5; i <= 1000001; i++) {
        if (h[i] == 1)
            count++;
        h[i] = count;
    }
    int k;
    while (scanf("%d", &k) && k) 
        printf("%d %d\n", k, h[k]);
}
