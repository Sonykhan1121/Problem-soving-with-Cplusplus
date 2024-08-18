n = int(input())

year = n//365
n%=365
month  = n//30
n%=30
day = n
print(year,"years")
print(month,"months")
print(day,"days")