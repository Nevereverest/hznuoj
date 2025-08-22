import math
_, k = map(int,input().split())
for i in list(map(int,input().split())):
    for _ in range(k):
        i = 10 * math.ceil(i ** 0.5)
        if i == 100:
            break
    print(i, end = ' ')