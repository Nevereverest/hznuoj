#include <stdio.h>
#include <string.h>
int main() {
    int t;
    scanf("%d", &t);
    getchar();
    char s[t][100002];
    for (int i = 0; i < t; i++) {
        fgets(s[i], 100002, stdin);
        int len = strlen(s[i]);
        if (len > 0 && s[i][len-1] == '\n') {
            s[i][len-1] = '\0';
            len--;
        }
        int pos = -1;
        for (int j = len - 1; j >= 0; j--) {
            if (s[i][j] >= '0' && s[i][j] <= '9') {
                pos = j;
                break;
            }
        }
        if (pos == -1) {
            printf("%s\n", s[i]);
            continue;
        }
        int current = pos;
        while (current >= 0) {
            if (s[i][current] < '0' || s[i][current] > '9') {
                break;
            }
            s[i][current]++;
            if (s[i][current] <= '9') {
                break;
            }
            s[i][current] = '0';
            current--;
            if (current < 0) {
                for (int j = len; j >= 0; j--) {
                    s[i][j+1] = s[i][j];
                }
                s[i][0] = '1';
                break;
            } else if (s[i][current] < '0' || s[i][current] > '9') {
                for (int j = len; j > current; j--) {
                    s[i][j+1] = s[i][j];
                }
                s[i][current+1] = '1';
                break;
            }
        }
        printf("%s\n", s[i]);
    }
}