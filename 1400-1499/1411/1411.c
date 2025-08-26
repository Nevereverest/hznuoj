#include <math.h>
#include <stdio.h>
const int N = 1e6;
int x[1000000];
int main() {
    x[0] = 1;
    for (int i = 1; i <= N; i++) 
        x[i] = (x[int(i - sqrt(i))] + x[int(log(i))] + x[int(i * sin(i) * sin(i))]) % N;
    int n;
    while (~scanf("%d", &n) && n >= 0) printf("%d\n", x[n]);
}
