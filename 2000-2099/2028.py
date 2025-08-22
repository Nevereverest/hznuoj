_,t=map(int,input().split())
l=list(input().split())
for i in range(t):
    s=input().split()
    l.insert(l.index(s[1]),s[0])
print(" ".join(l))