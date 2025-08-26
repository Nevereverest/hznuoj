import math
for _ in range(int(input())):
    a, b, x = map(float, input().split())
    if a < x:
        print("-1")
        continue
    k = math.ceil(a / b)
    now = 0
    while now < x:
        cnt = 2 * k - 1
        tmp = (a - b * (k - 1)) / cnt
        tmp = min(tmp, x - now)
        now += tmp
        a -= cnt * tmp
        if x - now > b and a < b:
            a = -1
            break
        k -= 1
    if a < 0:
        print("-1")
    else:
        print("{:.5f}".format(a))
