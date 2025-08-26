import datetime
for _ in range(int(input())):
    a,b,c=map(int,input().split("-"))
    print(datetime.date(a,b,c).strftime('%-j'),datetime.date(a,b,c).strftime("%A"))
