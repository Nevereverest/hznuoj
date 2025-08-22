for _ in range(int(input())):
    n = int(input())
    for i in range(1, 2 * n):
        for j in range(1, min(2 * n + i, 4 * n - i) + 1):
            if j == 2 * n + i or j == 4 * n - i:
                print("*")
            elif j == 2 * n + 1:
                print("*", end="")
            else:
                print(" ", end="")
    for i in range(1, n + 1):
        for j in range(1, 2 * n + 2):
            if j == 2 * n + 1:
                print("*")
            else:
                print(" ", end="")
    for i in range(1, 4):
        for j in range(1, 4 * n + 3 - i):
            if j < i:
                print(" ", end="")
            elif j == 4 * n + 2 - i:
                print("*")
            elif i == 1 or i == 3 or i == j:
                print("*", end="")
            else:
                print(" ", end="")
    print()