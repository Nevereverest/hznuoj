#include <iostream>
int main() {
    int n, num = 0, i, j;
    std::cin >> n;
    getchar();
    char s[100][20];
    int  a[18] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
    char str[11] = { '1','0','X','9','8','7','6','5','4','3','2' };
    for (i = 0; i < n; i++)
        std::cin >> s[i];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 17; j++)
            if (s[i][j] - '0' < 0 || s[i][j] - '0' > 9)
                break;
        if (j == 17)
        {
            int z = 0;
            for (j = 0; j < 17; j++)
                z += (s[i][j] - '0') * a[j];
            z = z % 11;
            if (str[z] != s[i][17])
                puts(s[i]);
            else num++;
        }
        else puts(s[i]);
    }
    if (num == n) std::cout << "All passed" << std::endl;
}
