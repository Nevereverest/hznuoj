def p(n):
    a=set()
    for i in range(n):
        s,e=map(int,input().split())
        a|=set(range(s,e+1))
    return a
for _ in range(int(input())):
    n,m=list(map(int,input().split()))
    print(len(p(n)&p(m)))
