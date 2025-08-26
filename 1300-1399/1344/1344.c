#include <math.h>
#include <stdio.h>
int main(){
    int y;
    double k;
    while (scanf("%d", &y) && y) {
        k = log(4);
        for (int i = 1960; i <= y; i += 10)k *= 2;
        int i = 1;
        double f = 0;
        while (f < k)
            f += log(++i);
        printf("%d\n", i - 1);
    }
}
