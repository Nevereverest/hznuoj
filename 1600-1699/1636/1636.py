n = int(input())
l = [0] * (n + 1)
for x in range(1, n + 1):
    k = x // 2
    l[x] = l[x - 1] + l[k] + k
print(1 + l[n] - l[n - 1])