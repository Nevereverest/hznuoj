b = []
n = 0
a = list(map(int, input().split()))
for i in range(10):
    j = len([x for x in b if x < a[i]])
    n = max(n, j + 1)
    if j >= len(b):
        b.append(a[i])
    else:
        b[j] = a[i]
print(n)