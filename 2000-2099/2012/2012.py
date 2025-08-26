l = list(map(int, input().split()))
dp = [1] * 10
for i in range(10):
    dp[i] = max([dp[i]] + [dp[j] + 1 for j in range(i) if l[j] < l[i]])
print(max(dp))