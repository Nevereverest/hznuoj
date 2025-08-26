#include <iostream>
int main()
{
    int n, i, j, m, flag1 = 0;
    char ch;
    while (std::cin >> ch) {
        if (ch == '@')
            break;
        if (flag1 == 0) flag1 = 1;
        else cout << "\n";
        std::cin >> n;
        for (j = 1; j <= n; j++) {
            if (j == n)
                for (m = 1; m <= (2 * j - 1); m++)
                    std::cout << ch;
            else
            {
                for (i = 1; i <= 2 * n; i++)
                {
                    int flag = 0;
                    if (((n + 1 - j) == i) || ((n - 1 + j) == i)) {
                        std::cout << ch;
                        flag++;
                        if (flag == 2) break;
                    }
                    else
                        std::cout << " ";
                }
                std::cout << "\n";
            }
        }
        std::cout << "\n";
        getchar();
    }
}