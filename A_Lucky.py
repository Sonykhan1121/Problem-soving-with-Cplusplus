tc = int(input())
while tc>0:
    n = input()
    first = int(n[0])+int(n[1])+int(n[2])
    second  = int(n[3]) +int(n[4])+int(n[5])
    # print(first,second)
    if(first==second):
        print("YES")
    else:
        print("NO")

    tc-=1