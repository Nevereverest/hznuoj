for _ in range(int(input())):
    n,k,_=map(int,input().split())
    l=sorted(map(int,input().split()))
    print(max(0,sum(l[:k])-n))