l=[[0]*4 for _ in range(4)]
for _ in range(int(input())):
    x,y,z=input().split()
    x,y=int(x),int(y)
    l[x][y]=z
for row in l:
    print(*row)