x, y = map(int, input().split())
a = {}
for _ in range(x):
    b = input().split()
    a[b[0]] = (b[1], int(b[2]))
for _ in range(y):
    score = a[input()][1]
    print("ARE YOU PIG?" if score < 60 else {10: "A", 9: "A", 8: "B", 7: "C", 6: "OK"}[score // 10])