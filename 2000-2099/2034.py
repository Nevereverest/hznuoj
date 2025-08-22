l = [input().split() for _ in range(int(input()))]
print(sorted(l, key=lambda x: int(x[1]))[9][0], sorted(l, key=lambda x: -int(x[2]))[9][0])