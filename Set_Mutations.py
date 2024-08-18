n = int(input())
set_a = set(map(int,input().split()))
q = int(input())
while q>0:
    first = list(map(str,input().split()))

    m = int(first[1])
    set_b = set(map(int,input().split()))
    if first[0]=='intersection_update':
        set_a.intersection_update(set_b)
    elif first[0]=='update':
        set_a.update(set_b)
    elif first[0]=='symmetric_difference_update':
        set_a.symmetric_difference_update(set_b)
    elif first[0]=='difference_update':
        set_a.difference_update(set_b)

    q-=1
print(sum(list(set_a)))