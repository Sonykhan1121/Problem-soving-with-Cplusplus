def print_rangoli(size):
    s  =[]
    # now = chr(97+size-1)
    # print(now)
    width = size*2-1
    width+=(width-1)
    for i in range(size,0,-1):
        str = chr(97+i-1)
        j = i+1
        while(j<=size):
            str = chr(97+j-1) +"-"+str+"-"+chr(97+j-1)
            j+=1
        
        s.append(str.center(width,'-'))
        
    for i in range(size-2,-1,-1):
        s.append(s[i])
    for i in s:
        print(i)
    return s

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)