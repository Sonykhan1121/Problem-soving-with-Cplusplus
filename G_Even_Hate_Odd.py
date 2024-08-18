tc = int(input())
while tc > 0:
    n  = int(input())
    a = list(map(int,input().split()))
    # print(a)
    even = odd = 0
    for i in a:
        if i % 2 == 0:
            even += 1
        else:
            odd += 1
    if n%2 !=0:
        print(-1)
        tc-=1
        continue
    need = n/2
    ans = int(min(abs(even-need),abs(odd-need)))
    print(ans)

    tc-=1