n = int(input())
s = set(map(int, input().split()))
# print(n,s)
q = int(input())
while q>0:
    now = list(map(str,input().split()))
    size = len(now)
    if size == 2:
        if now[0]=='remove':
            s.remove(int(now[1]))
        elif now[0]=='discard':
            s.discard(int(now[1]))
    elif size==1:
        if now[0]=='pop':
            s.pop()


    q-=1
print(sum(list(s)))