n  =int(input())
a = list(map(int,input().split(" ")))
# print(n)
# print(*a)
i ,j = 0,n-1
palindrome = True
while i < j:
    if a[i] != a[j]:
        palindrome = False
        break
    i+=1
    j-=1
if palindrome :
    print("YES")
else:
    print("NO")