x, y = map(int, input().split())
gd = {int(k): v for _ in range(x) for k, v in [input().split()]}
print(*[gd[int(input())] for _ in range(y)])