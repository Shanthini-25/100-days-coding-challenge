from bisect import bisect
from copy import copy
from operator import itemgetter
INF = 1E9
def solve(n, aclr):
    aclr.sort()
    aclr.sort(key=itemgetter(1))
    alrv = [(a*n -i , l*n - i, r*n-i) for i,(a,_,l,r) in enumerate(aclr)]
    costs = [n+1, 0]
    qual = [0]
    for a,l,r in alrv:
        pl = bisect(qual, l)
        if pl > 0:
            qual = [l] + qual[pl:]
            costs = [n+1] + costs[pl:]
        pa = bisect(qual, a)
        if pa != 0:
            if pa < len(qual):
                qual[pa] = a
            else:
                qual.append(a)
                costs.append(costs[-1]-1)
            pr = bisect(qual, r)
            if pr < len(qual):
                qual = qual[:pr]
                costs = costs[:pr+1]
            res = min(costs)+n
            if res > n:
                return -1
            else: 
                return res
     
for _ in range(int(input())):n = int(input());print(solve(n, [[int(a) for a in input().split()] for _ in range(n)]))


