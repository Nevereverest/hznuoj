def to_min(s):
    h, m = s.split(':')
    return int(h) * 60 + int(m)
for _ in range(int(input())):
    R = to_min(input())
    n, k = map(int, input().split())
    for _ in range(n):
        W = to_min(input())
        print("RUNRUNRUN!" if W == R or (W < R and (R - W) % k == 0) else "SLEEPSLEEPSLEEP!")