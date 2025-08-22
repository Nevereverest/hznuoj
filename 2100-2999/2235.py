import sys
for n in map(int, sys.stdin):
    print("YES" if n % 1024 == 0 or (n != 0 and 1024 % n == 0) else "NO")