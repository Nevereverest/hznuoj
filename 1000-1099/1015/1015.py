n = int(input())
while n:
    for _ in range(n):
        print(' '.join(str(k) for k in sorted(list(map(int,input().split())))))
    n = int(input())