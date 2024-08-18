import math
a , b = map(float,input().split())
fl = math.floor(a/b)
cl = math.ceil(a/b)
rd = a/b - fl
# print(fl,cl,rd)
rd  = fl+1 if rd>=0.5 else fl
print(f"floor {int(a)} / {int(b)} = {fl}")
print(f"ceil {int(a)} / {int(b)} = {cl}")
print(f"round {int(a)} / {int(b)} = {rd}")