import numpy as np
def getPowers(x):
    k = 2
    ret = [x]
    done = False
    while k < 10**9:
    if done:
        ret += [x]
    else:
        y = x.dot(x)
        y[y>0] = 1
        done = np.all(y==x)
        x = y
        ret += [x]
    k *= 2
    return ret
 
def mpow(xp,z,k):
    i = 0
    while k > 0:
        if k%2 == 1:
            z = xp[i].dot(z)
        i = i+1
        k //= 2
    return z
 
def solve(x,y):
    xp = getPowers(x)
    n = x.shape[0]
    for k,z in y:
        z0 = np.zeros(n)
        z0[z]=1
        z0 = mpow(xp,z0,k)
        ret = list(np.where(z0>0)[0])
        print(len(ret))
        if len(ret)==0:
            print(-1)
        else:
            print(" ".join(str(x+1) for x in ret))
 
import sys
f = sys.stdin
n = int(f.readline())
x = []
for j in range(n):
    y = list(map(int,f.readline().split()))
    x += [y]
    x = np.array(x,dtype=np.float64).transpose()
    m = int(f.readline())
    y = []
    for i in range(m):
        a,b = map(int,f.readline().split())
        y += [(a,b-1)]
    solve(x,y)