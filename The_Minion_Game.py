def minion_game(string):
    vowels = "AEIOU"
    stuart = 0
    kevin = 0
    size = len(string)
    for i in range(size):
        if string[i] in vowels:
            kevin+=size-i
        else:
            stuart+=size-i
        
    if(stuart>kevin):
        print("Stuart",stuart)
    elif(stuart<kevin):
        print("Kevin",kevin)
    else:
        print("Draw")
if __name__ == '__main__':
    s = input()
    minion_game(s)