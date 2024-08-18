a , b = map(int,input().split())

dif = abs(a-b)
if dif <= 1 and (a>0 or b>0):
    print("YES")
else:
    print("NO")
