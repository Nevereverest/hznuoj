for _ in range(int(input())):
    a = int(input())
    i = 1
    for i in range(1, 1000):
        if ((a * i * i + 1) ** 0.5).is_integer():
            break
    print(int((a * i * i + 1) ** 0.5), i)