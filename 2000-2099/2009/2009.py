while 1:
    try:
        s=int(input())
        print('%.2f'%(sum(list(map(int,input().split())))/s))
    except:
        break
