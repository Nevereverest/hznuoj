d = dict(input().split() for _ in range(int(input())))
for k, _ in sorted(d.items(), key=lambda x: int(x[1]))[:10]:
    d.pop(k)
print(*d.keys())