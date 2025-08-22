for _ in range(int(input())):
    k,n=map(int,input().split())
    print(1 if n&k==k else 0)