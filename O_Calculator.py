s = input()
if "+" in s:
    a, b = map(int,s.split("+"))
    print(a+b)
elif "-" in s:
    a, b = map(int,s.split("-"))
    print(a-b)
elif "*" in s:
    a, b = map(int,s.split("*"))
    print(a*b)
else:
    a, b = map(int,s.split("/"))
    print(a//b)


