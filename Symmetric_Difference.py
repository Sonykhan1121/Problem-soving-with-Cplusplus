n = int(input())
a = set(map(int,input().split()))
m = int(input())
b = set(map(int,input().split()))

# un = a.union(b)
# it = a.intersection(b)
ans =a.symmetric_difference(b)
print(type(ans))
for i in sorted(ans):
    print(i)