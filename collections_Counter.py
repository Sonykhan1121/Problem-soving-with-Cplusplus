from collections import Counter
n = int(input())
a = list(map(int,input().split()))
q = int(input())
c = dict(Counter(a))

# for i , j in c.items():
#     print(i,j)
result = 0

for i in range(q):
    size, price = map(int,input().split())
    # print(size, price)
    if size in c.keys() and c[size]>0:
        # print("hi")
        c[size]-=1
        result +=price
print(result)
