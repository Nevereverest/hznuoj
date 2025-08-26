for _ in range(int(input())):
    A, B, H = map(float, input().split())
    a, b, h = map(float, input().split())
    h1 = A * B * H / (A * B - a * b)
    print('%.2f' % (h1 if h1 <= h else a * b * h / A / B + H))