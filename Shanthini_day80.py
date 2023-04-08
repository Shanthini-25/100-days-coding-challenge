for i in range(int(input())):
    n = int(input())
    lst = list(map(int,input().strip().split()))
    k=0
    if(n%2!=0):
        print("No")
    else:
        new_lst = list(set(lst))
        for j in new_lst:
            c = lst.count(j)
            if(c%2!=0):
                print("No")
                break 
            else:
                k = k+1
        if(k==len(new_lst)):
            print("Yes")
                