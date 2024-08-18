n ,m  = map(int,input().split())
ans = 0
for i in range(2,m+1,2):
    if i%2==0:
        ans+=(n**i)
print(ans)
