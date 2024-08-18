n = int(input())
s = input()

for i in range(26):
    count = s.count(chr(i + 97))
    if count > 0:
        print(chr(i + 97) * count, end='')
