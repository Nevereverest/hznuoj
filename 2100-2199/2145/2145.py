while 1:
    try:
        l=[]
        for _ in range(int(input())):
            l.insert(*map(int,input().split()))
        print(*l)
    except:
        break