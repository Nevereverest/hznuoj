import datetime

while True:
    try:
        a, b, c = map(int, input().split())
        d = datetime.datetime(a, b, c)
        d = d + datetime.timedelta(days=10000)
        print(d.strftime("%Y-%-m-%-d"))
    except:
        break
