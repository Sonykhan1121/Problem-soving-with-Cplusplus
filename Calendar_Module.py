import calendar
import datetime
month,day ,year = map(int,input().split())

date  = datetime.date(year,month,day)
print(calendar.day_name[date.weekday()].upper())
# print(calendar.TextCalendar(firstweekday=4).formatyear(2024))