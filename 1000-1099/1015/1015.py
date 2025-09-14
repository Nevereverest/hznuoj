n=int(input())
while n:
    for _ in range(n):
        print(*sorted(map(int,input().split())))
    n=int(input())