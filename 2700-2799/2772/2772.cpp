#include <iostream>
#include <vector>
const int MOD = 1000000007;
int main() {
    int n, m;
    std::cin >> n >> m;

    std::vector<std::vector<long long>> dp(n + 1, std::vector<long long>(m + 1, 0));
    std::vector<long long> prefix(m + 1, 0);

    for (int j = 1; j <= m; ++j) dp[1][j] = 1;

    for (int j = 1; j <= m; ++j) prefix[j] = (prefix[j - 1] + dp[1][j]) % MOD;

    for (int i = 2; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) dp[i][j] = prefix[j] % MOD;
        for (int j = 1; j <= m; ++j) prefix[j] = (prefix[j - 1] + dp[i][j]) % MOD;
    }

    long long result = 0;
    for (int j = 1; j <= m; ++j) result = (result + dp[n][j]) % MOD;

    std::cout << result << std::endl;
}
