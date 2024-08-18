tc = int(input())
while tc>0:
    n = int(input())
    set_a = set(map(int,input().split()))
    m = int(input())
    set_b = set(map(int,input().split()))

    if(set_a.issubset(set_b)):
        print("True")
    else:
        print("False")



    tc-=1