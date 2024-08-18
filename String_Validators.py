if __name__ == '__main__':
    s = input()
    An =alp=digits=lower=upper= False
    for i in s:
        if i.isalnum():
            An = True
        if i.isalpha():
            alp = True
        if i.isdigit():
            digits = True
        if i.islower():
            lower = True
        if i.isupper():
            upper = True
    print(An)
    print(alp)
    print(digits)
    print(lower)
    print(upper)
