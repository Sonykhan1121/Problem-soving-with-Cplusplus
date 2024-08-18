
tc = int(input())

while tc>0:
    n = int(input())
    a = list(map(int,input().split(' ')))
    left = [0]*n
    right = [0]*n
    for i in range(n):
        if i==0:
            left[i] = a[i]-(i+1)
        else :
            left[i] = min(left[i-1],a[i]-(i+1))
    # print(left)
    for i in range(n-1,-1,-1):
        if i==n-1:
            right[i] = a[i]+(i+1)
        else :
            right[i] = min(right[i+1],a[i]+(i+1))
    # print(right)
    ans = 10000000000
    for i in range(n-1):
        ans = min(ans,left[i]+right[i+1])
    print(ans)

    



    tc-=1