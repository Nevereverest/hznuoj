a, ans = [], 0
for i in range(int(input())):
    a.append(input())
b = sorted(a)
while b[0][ans] == b[-1][ans]:
    ans = ans + 1
print(ans)