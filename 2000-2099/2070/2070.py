l = [sum(1 for j in range(1, i+1) if i % j == 0) for i in range(1, 1001)]
ans = {}
for i, cnt in enumerate(l, 1):
    if cnt <= 100 and (cnt not in ans or i < ans[cnt]):
        ans[cnt] = i
for _ in range(int(input())):
    result = ans.get(int(input()), 1001)
    print(result if result <= 1000 else -1)