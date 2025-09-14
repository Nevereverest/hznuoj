input()
l=list(map(int,input().split()))
m=sorted(l,reverse=True)
for i in l:
    j=m.index(i)
    print(j+1,end=" ")
    m[j]=-1