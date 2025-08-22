#include <iostream>
int main() {
    int t;
    long long a;
    std::cin >> t;
    while (t--) {
        int n, m, i, j, k, x, y, s;
        char a[100][102];
        std::cin >> n >> m;
        for (i = 0; i < n; i++)
            std::cin >> a[i];
        std::cin >> k;
        for (i = 0; i < k; i++) {
            std::cin >> x >> y >> s;
            a[x][y] = (a[x][y] - 'a' + s % 26) % 26;
            if (a[x][y] >= 0) a[x][y] = a[x][y] + 'a';
            else a[x][y] = a[x][y] + 'z' + 1;
        }
        for (i = 0; i < n; i++)
            std::cout << a[i] << "\n";
    }
}