a=[1,2,4,8]
for i in range(4,66):a.append(a[i-1]+a[i-2]+a[i-3]+a[i-4])
for _ in range(int(input())):print(a[(int(input()))-1])
