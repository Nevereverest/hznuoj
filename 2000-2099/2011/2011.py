n = float(input())
total = 0

for i in range(int(n), 0, -2):
    total += 1 / i

print("%.2f" % total)