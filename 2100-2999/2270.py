for _ in range(int(input())):
    a = sum(map(int, input().split()))
    k = min(2, a // 1000)
    a -= k * 1000
    print(k + a // 600 + a % 600 // 200)