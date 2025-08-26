s = [list(map(int, input().split())) for _ in range(int(input()))]
for i in range(8,0,-1):
    s.sort(key=lambda x:-int(x[i]))
print(s[0][0])