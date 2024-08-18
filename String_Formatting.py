n =int(input())
space = len(str(bin(n)))-2
# print("space: ",space)
for i in range(1,n+1):
    print("",str(i).rjust(space,'*')+"",str(oct(i))[2:].rjust(space,'*'),end='')
    print("",str(hex(i)).upper()[2:].rjust(space,'*')+"",str(bin(i))[2:].rjust(space,'*'))