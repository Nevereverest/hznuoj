for _ in range(int(input())):
    n=int(input())
    if n%7==0 or '7' in str(n) or ((n-1)%9)==6:print(1)
    else:print(0)