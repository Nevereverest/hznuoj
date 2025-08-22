import math
for _ in range(int(input())):
    a, b = map(int, input().split())
    c = b * 2
    while math.gcd(a, c) != b: c += b
    print(c)