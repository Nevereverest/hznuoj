#include <stdio.h>
int main() {
    int n, k, i, a, j;
    char str[15][10] = { "Ace","2","3","4","5","6","7","8","9","10","Jack","Queen","King" };
    int t[110][110];
    int save[110][60];
    scanf("%d", &n);
    for (i = 1; i <= 52; i++)
        save[0][i] = i;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= 52; j++)
            scanf("%d", &t[i][j]);
    while (scanf("%d", &a) != EOF) {
        for (i = 1; i <= 52; i++)
            save[a][i] = save[0][t[a][i]];
        for (i = 1; i <= 52; i++)
            save[0][i] = save[a][i];
        for (i = 1; i <= 52; i++) {
            if (save[a][i] >= 1 && save[a][i] <= 13) printf("%s of Clubs\n", str[save[a][i] % 13]);
            else if (save[a][i] >= 14 && save[a][i] <= 26) printf("%s of Diamonds\n", str[save[a][i] % 13]);
            else if (save[a][i] >= 27 && save[a][i] <= 39) printf("%s of Hearts\n", str[save[a][i] % 13]);
            else if (save[a][i] >= 40 && save[a][i] <= 52) printf("%s of Spades\n", str[save[a][i] % 13]);
        }
        printf("\n");
    }
}