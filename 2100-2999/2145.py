while 1:
    try:
        l=[]
        for _ in range(int(input())):
            a,b=map(int,input().split())
            l.insert(a,b)
        print(' '.join(str(i) for i in l))
    except:break