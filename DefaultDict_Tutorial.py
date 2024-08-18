n , m = map(int,input().split())
dc = {}
for i in range(n):
    ch = input()
    if ch not in dc:
        dc[ch] = []
        dc[ch].append(i+1)
    else:
        dc[ch].append(i+1)

for i in range(m):
    ch  = input()
    if ch not in dc:
        print(-1)
    else:
        print(*dc[ch])
