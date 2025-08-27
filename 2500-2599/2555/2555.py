input()
l = sorted(map(int, input().split()))
dic = {}
for i in range(len(l)):
    for j in range(i):
        gc = l[i] - l[j]
        dic[(i, gc)] = dic.get((j, gc), 1) + 1
print(max(dic.values()) if dic else 1)