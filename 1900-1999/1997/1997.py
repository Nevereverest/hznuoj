while 1:
    try:
        l=list(map(int,input().split()))
        print('%.2f'%(sum(l)/len(l)))
    except:
        break
