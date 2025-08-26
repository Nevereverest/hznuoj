for _ in range(int(input())):
    A, B, k = map(int, input().split())
    n = A + B
    s = ""
    while n:
        s = str(n % k) + s
        n //= k
    print(s or "0")