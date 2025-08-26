a, b = map(int, input().split())
b = -b if a > 0 else b * 2
if (abs(b) % 2 == 1 and a * b < 0) or (abs(b) % 2 == 0 and a * b > 0):a = -a
print(a - b)