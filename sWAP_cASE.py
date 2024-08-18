def swap_case(s):
    news =""
    for i in s:
        if(i.islower()):
            news+=i.upper()
        elif (i.isupper()):
            news+=i.lower()
        else:
            news+=i
    return news

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)