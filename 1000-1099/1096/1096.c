#include <stdio.h>
#include <string.h>
char map[35][33];
int main(){
    int t;
    scanf("%d", &t);
    int cnt = 0;
    while (t--) {
        cnt++;
        for (int i = 0; i <= 32; i++)
            for (int j = 0; j <= 32; j++)
                map[i][j] = '.';
        int x, y;
        scanf("%d%d", &y, &x);
        char s[1005];
        scanf("%s", s);
        int len = strlen(s);
        int flag = 0;
        int count = 0;
        for (int i = 0; i < len - 1; i++) {
            if (s[i] == 'E') {
                y++;
                map[x - 1][y - 1] = 'X';
            }
            else if (s[i] == 'W') {
                y--;
                map[x][y] = 'X';
            }
            else if (s[i] == 'N') {
                x++;
                map[x - 1][y] = 'X';
            }
            else if (s[i] == 'S') {
                x--;
                map[x][y - 1] = 'X';
            }
        }
        printf("Bitmap #%d\n", cnt);
        for (int i = 31; i >= 0; i--) {
            for (int j = 0; j < 32; j++) {
                printf("%c", map[i][j]);
            }
            printf("\n");
        }
        if (t) printf("\n");
    }
}