n,m  = map(int,input().split())
stick = 1
s  = ".|."
for i in range(n//2):
    print((s*stick).center(m,'-'))
    stick+=2
    
wel  = "WELCOME"
print((wel).center(m,'-'))
stick-=2
for i in range(n//2):
    print((s*stick).center(m,'-'))
    stick-=2

