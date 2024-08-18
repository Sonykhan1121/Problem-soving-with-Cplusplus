line = int(input())
columns = list(map(str,input().split()))
marks = 0
index = 0
print(columns)
for i in range(4):
    if columns[i] =='MARKS':
        index = i
    
for i in range(line):
    a = list(map(str,input().split()))
    print(a)
    marks+=int(a[index])
print(f"{marks/line:.2f}")