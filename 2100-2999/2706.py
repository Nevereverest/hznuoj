def p(x,y):
    return a*x*x+b*x+c*y*y+d*y+e
for i in range(int(input())):
    n,m=map(int,input().split())
    a,b,c,d,e=map(int,input().split())
    min=10000000000000000
    for x in range(1-n,n):
        for y in range(1-m,m):
            if p(x,y)<min:
                min=p(x,y)
    print(min)