for _ in range(int(input())):
    B = J = X = 0
    for char in reversed(input().strip()):
        if char == 'B':B = (B + 1) % 1000000007
        elif char == 'J':J = (B + J) % 1000000007
        elif char == 'X':X = (J + X) % 1000000007
    print(X)