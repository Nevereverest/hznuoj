#include <algorithm>
#include <cstring>
#include <iostream>
long long f[30][30], n, m, x, y, z;
int main() {
    while (std::cin >> n >> m) {
        memset(f, 0x3f, sizeof(f));
        for (int i = 1; i <= n; i++)f[i][i] = 0;
        for (int i = 1; i <= m; i++) {
            std::cin >> x >> y >> z;
            f[x][y] = f[y][x] = z;
        }
        for (int k = 1; k <= n; k++) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    f[i][j] = std::min(f[i][j], f[i][k] + f[k][j]);
                }
            }
        }
        std::cin >> x >> y;
        if (f[x][y] > 2 * 1e9)std::cout << "No path" << std::endl;
        else std::cout << f[x][y] << std::endl;
    }
}
