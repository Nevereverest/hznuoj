while 1:
    try:
        input()
        print(*sorted(map(int,input().split()),key=abs))
        print()
    except:
        break