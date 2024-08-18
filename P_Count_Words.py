import re as r

s = input()

str = r.split(r'[!,.?" "]',s)
count =0
for i in str:
    if i:
        count+=1
print(count)