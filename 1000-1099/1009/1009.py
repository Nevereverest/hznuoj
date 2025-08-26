while(int(input())):
    l=sorted(list(set(list(map(int,input().split())))))
    print(len(l))
    for i in l:print(i,end=' ')
    print('\n')