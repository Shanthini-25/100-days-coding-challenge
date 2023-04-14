# cook your dish here
from itertools import permutations
from bisect import bisect_left as bl
for __ in range(int(input())):
    n=int(input())
    li=list(map(int,input().split()))
    li.sort()
    li.pop(0)
    t0=[]
    s=[]
    while li:
        t1=[]
        c=li.pop(0)

        for i in t0:
            li.pop(bl(li,c+i))
            t1.append(c+i)
        t1.append(c)
        t0=t0+list(t1)
        s.append(c)

    for i in range(n):
        print(s[i],end=' ')
    print()