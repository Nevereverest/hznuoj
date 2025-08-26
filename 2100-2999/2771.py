_, k = map(int, input().split())
w = sorted(list(map(int, input().split())), reverse=True)
print("{:.2f}".format(sum(w[:k]) / 1000.0))