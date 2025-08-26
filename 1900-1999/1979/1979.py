l=[1,1,2]
for i in range(3,31):l.append(l[i-1]+l[i-2]+l[i-3])
for _ in range(int(input())):print(l[int(input())])
