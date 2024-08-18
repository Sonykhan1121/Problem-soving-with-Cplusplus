def merge_the_tools(string, k):
    size = len(string)
    i = 0
    while i<size:
        now = string[i:i+k]
        ans =""
        for j in now:
            if j not in ans:
                ans+=j
        print(ans)
        i+=k


if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)