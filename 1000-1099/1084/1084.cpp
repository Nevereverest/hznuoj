#include <iostream>
#include <cstring>
int main() {
    std::string a[1005], b[1005], c[1005], s[1005];
    int flag[1005], temp[1005];
    int n, m, t;
    while (std::cin >> n >> m >> t) {
        for (int i = 0; i < n; i++)
            std::cin >> a[i];
        memset(flag, 0, sizeof(flag));
        memset(temp, 0, sizeof(temp));
        for (int j = 0; j < m; j++) {
            std::cin >> b[j];
            for (int i = 0; i < n; i++) {
                if (b[j] == a[i]) {
                    flag[j] = 1;
                    break;
                }
            }
        }
        for (int k = 0; k < t; k++) {
            std::cin >> c[k];
            for (int j = 0; j < m; j++) {
                if (c[k] == b[j]) {
                    temp[j] = 1;
                    break;
                }
            }
        }
        int ans = 0;
        for (int j = 0; j < m; j++) {
            if (flag[j] && !temp[j])
                s[ans++] = b[j];
        }
        if (!ans) std::cout << "No enemy spy" << std::endl;
        else {
            for (int j = 0; j < ans - 1; j++)
                std::cout << s[j] << " ";
            std::cout << s[ans - 1] << std::endl;
        }
    }
}
