import textwrap

def wrap(string, max_width):
    i = 0
    result = ""
    while i<len(string):
        result+=(string[i:i+max_width])+"\n"
        i+=max_width
    return result

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)