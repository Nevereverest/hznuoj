while True:
    try:
        n, m = map(int, input().split())
        elements = list(map(int, input().split()))
        for _ in range(m):
            mi = int(input())
            if 0 <= mi < n:
                print(elements[mi])
            else:
                print("Index out of range")
    except:
        break