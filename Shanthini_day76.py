from sys import stdin
def check(x):
    ls = [[] for _ in range(x)]; cIND = 0
    for i in range(n):
        if len(ls[cIND])==k:
            return True
        if len(ls[cIND])==0 or ls[cIND][-1]*c<=a[i]:
            ls[cIND].append(a[i])
            cIND = (cIND+1)%x
    if len(ls[cIND])==k:
        return True
    return False
for _ in range(int(input())):
    n,k,c = map(int,stdin.readline().split())
    a = list(map(int,stdin.readline().split()))
    a.sort(); l = 0; r = n+1
    while r-1>l:
        mid = (l+r)//2
        if check(mid):
            l = mid
        else:
            r = mid
    print(l)