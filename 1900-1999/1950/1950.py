while True:
    try:
        a=list(map(int,input().split()))
        L=[i for i in a[1:] if i%2==0]
        print('%d %d %.2f'%(sum(i for i in L),sum(i**2 for i in L),sum(1/i for i in L)))
    except:
        break