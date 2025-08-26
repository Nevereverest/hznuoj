import datetime
a=datetime.datetime.strptime(input(),'%Y %m %d')+datetime.timedelta(days=1)
print(a.year,a.month,a.day)