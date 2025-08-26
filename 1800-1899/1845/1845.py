for _ in range(int(input())):
    a, b = input().split()
    ans = ''
    for i in range(len(a)):
        d = int(a[i]) - int(b[i])
        ans += str(abs(d))
    print(ans.lstrip('0') or '0')
