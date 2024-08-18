import math
s = input()
if '+' in s:
    index = s.rfind('+')
    x , y = s[:index],s[index:len(s)-1]
else:
    index = s.rfind('-')
    x , y = s[:index],s[index:len(s)-1]
x = int(x)
y = int(y)
# print(x,y)
r = math.sqrt(x*x + y*y)
theta = math.atan2(y,x)
print(f"{r:.3f}")
print(f"{theta:.3f}")

