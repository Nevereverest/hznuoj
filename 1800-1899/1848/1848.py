for _ in range(int(input())):
    s, n, m = map(int, input().split())
    cnt = 0
    ans = []
    while n != m and s > 0:
        if m < n or m % 2 != 0:
            m += 1
            ans.append(1)
        else:
            m //= 2
            ans.append(0)
        s -= 1
    if s == 0 and n != m:
        print("OMG!")
    else:
        print(' '.join(["oh!" if x == 0 else "yeah!" for x in ans[::-1]]))
