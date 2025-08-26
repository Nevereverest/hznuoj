l = [10, 18, 25, 11, 21, 13, 29]
l1 = [0] * 7
for _ in range(int(input())):
    a = 0
    for b in range(1, 5):
        x = input()
        for j, char in enumerate(x, 1):
            if char == '*':
                a += b * j
    for k in range(7):
        if a == l[k]:
            l1[k] += 1
print(*l1)