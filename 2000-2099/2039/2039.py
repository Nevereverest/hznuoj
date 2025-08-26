for _ in range(int(input())):
    input()
    res = 0
    for num in input().split():
        res ^= int(num)
    print(res)