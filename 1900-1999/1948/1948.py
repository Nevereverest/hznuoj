while 1:
    try:
        n=int(input())
        print('%.5f' %(sum(1/(2*i+1)*(-1)**i for i in range(n))))
    except:
        break