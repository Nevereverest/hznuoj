for _ in range(int(input())):
    cnt = 0
    flag = 1
    x, y, n = map(int, input().split())
    r = sorted(list(map(float, input().split())))
    sum_val = 0
    i = n - 1
    while True:
        if 2 * r[i] <= y:
            flag = 0
            break
        sum_val += (4 * r[i] * r[i] - y * y)**(0.5)
        cnt += 1
        i -= 1
        if sum_val - x >= 0:
            break
        if i == -1:
            flag = 0
            break
    print(cnt if flag else -1)
