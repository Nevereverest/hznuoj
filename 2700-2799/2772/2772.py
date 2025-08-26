from math import comb
n, m = map(int, input().split())
print(comb(n + m - 1, n) % (10**9 + 7))