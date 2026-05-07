import sys,bisect
input=sys.stdin.readline
def inv(a):
    v=sorted(set(a)); c=[0]*(len(v)+1); r=0
    for i,x in enumerate(a):
        p=bisect.bisect_left(v,x)+1; s=0; q=p
        while q:s+=c[q]; q-=q&-q
        r+=i-s; q=p
        while q<len(c):c[q]+=1; q+=q&-q
    return r
for _ in range(int(input())):
    n,m=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    x=inv(a)
    if x==0 or len(set(a))<n or sum(b)&1:
        print("Yes")
    else:
        p=0; ok=x%2==0
        for y in b:
            p+=y
            ok|=p%2==x%2
        print("Yes" if ok else "No")