for _ in range(int(input())):
    s=0
    for i in range(2,int(input())+1):
        s=(s+7)%i;
    print(s+1)
