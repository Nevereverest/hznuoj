#include <stdio.h>
int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a == 0)printf("1");
    else printf("%d", a + 2 * b + 1);
}