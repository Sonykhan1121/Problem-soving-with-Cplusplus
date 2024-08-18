tc = int(input())
while tc > 0:
    lin = list(map(str,input().split()))
    n = int(lin[0])
    s = lin[1]
    print((s+" ")*n)

    tc-=1