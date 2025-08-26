while 1:
    try:
        l=list(map(int,input().split()))
        print('%d %d %.2f'%(max(l),min(l),sum(l)/len(l)))
    except:
        break
