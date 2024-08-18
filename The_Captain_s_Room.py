
n = int(input())
a = list(map(int,input().split()))
mp = {}
for i in a:
    if i not in mp:
        mp[i] = 1
    else:
        mp[i]+=1

for i in mp.keys():
    if mp[i] ==1:
        print(i)
        break
