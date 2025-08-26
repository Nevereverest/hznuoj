for _ in range(int(input())):
    n, hunger, k = map(int, input().split())
    d = 0
    for _ in range(n-1):
        code, t = input().split()
        if t == 'Y': d += 1 + (int(code) > k)
        else: d += int(code) < k
    print("heihei" if d < hunger else "awsl")