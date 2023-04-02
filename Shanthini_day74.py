for i in range(int(input())):
    n,m = map(int,input().split())
    if(n%2==0 and m%2==0):
        print(0)
    elif n%2==0:
        print(n)
    elif m%2==0:
        print(m)
    else:
        print(n+m-1)