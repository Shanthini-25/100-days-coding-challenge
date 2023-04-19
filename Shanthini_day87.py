from math import *
for i in range(int(input())):
    n = int(input())
    lst = list(map(int,input().split()))
    x,y = 0,0 
    s = 0
    while(i<n):
        if(lst[i]>=lst[x]):
            y=y+1
        else: 
            s = s + (y-x+1)*lst[x]-lst[y]
            x=y 
    s= s + (n-x)*lst[x]-lst[n-1]
    if(s<=0):
        print(0)
    else:
        print(s)