while True:
    try:
        a,b = map(int, input().split())
        if a<b: a,b = b,a
        print(0 if int((a-b)*(1+5**0.5) / 2.0)==b else 1)
    except:
        break
