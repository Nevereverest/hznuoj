while 1:
    try:
        print(' '.join(str(i) for i in sorted(list(map(float,input().split())))))
    except:
        break
