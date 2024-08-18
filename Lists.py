if __name__ == '__main__':
    N = int(input())
    answer_list = []
    while N >0:
        now = list(map(str,input().split()))
        size = len(now)
        if size ==3:
            s,index,value = now[0],int(now[1]),int(now[2])
            answer_list.insert(index,value)
        elif size == 2:
            s,n  = now[0],int(now[1])
            if s == "remove" and n in answer_list:
                answer_list.remove(n)
            elif s == "append":
                answer_list.append(n)
        else:
            s = now[0]
            if s == "print":
                print(answer_list)
            elif s == "sort":
                answer_list.sort()
            elif s == "pop" and len(answer_list)!=0:
                answer_list.pop()
            elif s == "reverse":
                answer_list.reverse()
            




        N-=1