import calendar
for _ in range(int(input())):print('29' if calendar.isleap(int(input())) else '28')
