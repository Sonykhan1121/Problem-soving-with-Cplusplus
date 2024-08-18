str = list(map(str,input().split()))
# print(str)
for i in range(0,len(str)):
    print(str[i][::-1],end='')
    if(i!=len(str)-1):
        print("",end=' ')

