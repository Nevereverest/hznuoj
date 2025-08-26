import calendar
l=[9,6,5,5,5,5,6]
for _ in range(int(input())):print(l[calendar.weekday(int(input()),5,1)])