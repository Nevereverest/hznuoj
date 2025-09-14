n = int(input().strip())
A = list(map(int, input().split()))
if n == 1:
    print(n)
else:
    jumps = 0
    current_end = 0
    farthest = 0
    for i in range(n - 1):
        if i < n:
            farthest = max(farthest, i + A[i])
        if i == current_end:
            jumps += 1
            current_end = farthest
            if current_end >= n - 1:
                break
    score = n - jumps
    print(score)