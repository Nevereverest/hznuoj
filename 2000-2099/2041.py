while True:
    n, t = map(int, input().split())
    if n == 0 and t == 0: break
    dp = [0] * (t + 1)
    for _ in range(n):
        input()
        v = list(map(int, input().split()))
        w = list(map(int, input().split()))
        for a, b in zip(v, w):
            for j in range(t, b - 1, -1):
                dp[j] = max(dp[j], dp[j - b] + a)
    print(dp[t])