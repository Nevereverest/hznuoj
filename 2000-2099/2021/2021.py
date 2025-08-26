for _ in range(int(input())):
    a,b=map(int, input().split())
    l=[input() for _ in range(a)]
    for _ in range(b):
        c,d,e=input().split()
        d,e=int(d)-1,int(e)-1
        if c=='C':
            l[d]=l[e]
        elif c=='A':
            l[d]+=l[e]
    print(l[0])
