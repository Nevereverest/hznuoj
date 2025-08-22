n = int(input())
a = [0, 1, 1] + [0] * 47
i = 3
while True:
    a[i] = a[i-2] + a[i-1]
    if a[i] >= n:
        break
    i += 1
print(a[i] if a[i] == n else a[i-1])
print(a[i])