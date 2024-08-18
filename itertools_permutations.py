from itertools import combinations, permutations
def compare(a:tuple)->bool:
    return len(a),a
s , k = map(str,input().split())
k = int(k)
now = []
for i in range(1,k+1):
    now.extend(list(combinations(s,i)))
# print(type(now[0]))
# print(type(now))
now.sort(key = compare)
for i in now:
    for j in i:
        print(j,end='')
    print()