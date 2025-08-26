#include <stdio.h>
#include <string.h>
int main() {
    char s[300];
    while (gets(s)) {
        int flag1 = 1, flag2 = 1;
        for (int i = 1; i < strlen(s) / 2; i++) {
            if (s[i] != s[strlen(s) - i]) {
                flag1 = 0;
                break;
            }
        }
        for (int i = 0; i < (strlen(s) - 1) / 2; i++) {
            if (s[i] != s[strlen(s) - 2 - i]) {
                flag2 = 0;
                break;
            }
        }
        (flag1 || flag2) ? printf("zz happy!\n") : printf("zz cry\n");
    }
}
