#include <iostream>
int main() {
    int t, n, m, a[500], b[500];
    std::cin >> t;
    while (t--) {
        std::cin >> n >> m;
        for (int i = 0; i < m; i++)
            scanf("%d%d", a + i, b + i);
        int ans = m + 2;
        for (int i = 0; i < (1 << n); i++) {
            int cnt = 0;
            for (int j = 0; j < m; j++) {
                if (((i >> a[j]) % 2) == ((i >> b[j]) % 2))
                    cnt++;
            }
            if (ans > cnt)ans = cnt;
        }
        std::cout << ans << std::endl;
    }
}