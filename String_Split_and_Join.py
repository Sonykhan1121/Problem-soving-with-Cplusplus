def split_and_join(line):
    ans = ""
    for i in line:
        if " "==i:
            ans+='-'
        else:
            ans+=i


    return ans
    

if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)