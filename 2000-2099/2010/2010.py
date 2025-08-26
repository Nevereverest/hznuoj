l=[0,1,2]
for i in range(3,20):l.append(l[i-1]+l[i-2])
for _ in range(int(input())):print(l[(int(input()))])
