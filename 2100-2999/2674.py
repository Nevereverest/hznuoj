import sys
for line in sys.stdin:
    n = int(line)
    a, b = 1, 1
    while b < n:
        a, b = b, a + b
    print("Lucky Day" if b == n else "Bad Day")