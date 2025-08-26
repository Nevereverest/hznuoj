while 1:
    try:
        input()
        print(' '.join(map(str,sorted(list(map(int,input().split())),key=abs))))
        print()
    except:
        break
