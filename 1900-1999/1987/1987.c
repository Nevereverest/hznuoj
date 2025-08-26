#include <stdio.h>
int main() {
    int n;
    int n0 = 1996;
    char* m[] = { "Êó","Å£","»¢", "ÍÃ", "Áú", "Éß", "Âí", "Ñò", "ºï", "¼¦", "¹·", "Öí" };
    while (scanf("%d", &n) != EOF) {
        if (n > 0) {
            n = (n - n0) % 12;
            if (n < 0)n = n + 12;
            printf("%s\n", m[n]);
        }
        if (n < 0) {
            n = (n - n0) % 12 + 1;
            if (n < 0)n = n + 12;
            printf("%s\n", m[n]);
        }
    }
}