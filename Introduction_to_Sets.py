n = int(input())
a = list(map(int,input().split()))

st = set(a)

size = len(st)
sum =0
while len(st)>0:
    sum+=st.pop()
print(f"{sum/size:.3f}")