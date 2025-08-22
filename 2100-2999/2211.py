for _ in range(int(input())):
    l = sorted([input().split() for _ in range(int(input()))], key=lambda x: -(int(x[1]) + int(x[2])))
    print('\n'.join(i[0] for i in l))