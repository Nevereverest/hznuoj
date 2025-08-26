while True:
    try:
        n=int(input())
        print(n,'-->',bin(n).replace('0b',''),sep='')
    except:
        break