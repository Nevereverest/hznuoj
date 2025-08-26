#include <iostream>
int main() {
    int n, m, i, j, num = 1, s, p, q;
    while (std::cin >> n >> m) {
        if (n == 0 && m == 0) exit(0);
        char str[n][m + 1];
        for (i = 0; i < n; i++) {
            for (j = 0; j <= m; j++) {
                scanf("%c", &str[i][j]);
            }
        }
        printf("Field #%d:\n", num);
        num++;
        for (i = 0; i < n; i++) {
            for (j = 0; j <= m; j++) {
                s = 0;
                if (str[i][j] == '*') std::cout << str[i][j];
                else if (str[i][j] == '.') {
                    for (p = -1; p <= 1; p++) {
                        for (q = -1; q <= 1; q++) {
                            if (str[i + p][j + q] == '*') s++;
                        }
                    }
                    std::cout << s;
                }
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
}
