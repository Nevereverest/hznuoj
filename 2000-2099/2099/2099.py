import datetime
while True:
    try:
        print(datetime.datetime.strptime(input(),"%Y %m %d").strftime('%A'))
    except:
        break