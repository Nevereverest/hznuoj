#include <algorithm>
#include <iostream>
int main() {
    int n, m;
    std::cin >> n >> m;
    int ans = (n * m * (1 + m) * (1 + n)) / 4;
    int square = 0;
    for (int i = 1; i <= std::min(n, m); i++) square += (n - i + 1) * (m - i + 1);
    std::cout << square << " " << ans - square << std::endl;
}