from collections  import Counter
tc = int(input())
while tc>0:
    n = int(input())
    s = input()
    a = dict(Counter(s))
    result = 0
    for i in a.keys():
        if(a[i]>0):
            result += (a[i]+1)
    print(result)
    tc-=1