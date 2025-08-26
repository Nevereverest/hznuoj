c = abs(int(input()) - int(input()))
k = c // 2
print(k * (k + 1) if c % 2 == 0 else (k + 1) ** 2)