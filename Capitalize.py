def solve(s):
    a = list(map(str,s.split(" ")))
    ss  = ""
    for i in range(len(a)):
        
        ss+=a[i].capitalize()
        if(i!=len(a)-1):
            ss+=" "
    return ss

now = input()
print(solve(now))