from sys import stdin, setrecursionlimit
import resource
input = stdin.readline
setrecursionlimit(int(1e9))
def ii():
    return int(input())
def li():
    return list(map(int, input().split()))
a = []
b = []
n = 0
g = []
dp = []
def dfs(at, par, col):
    global a,b,g,dp
    if dp[col][at] != -1:
        return dp[col][at]
    
    if col == 2:
        if a[at] != b[at]:
            dp[col][at] = 1
            for ch in g[at]:
                if ch == par:
                  continue
                dp[col][at] += dfs(ch, at, b[at])
            return dp[col][at]
        
        dp[col][at] = 1
        for ch in g[at]:
            if ch == par:
            continue
        dp[col][at] += dfs(ch, at, b[at])
        res = 0
        for ch in g[at]:
            if ch == par:
            continue
            res += dfs(ch, at, 2)
        dp[col][at] = min(dp[col][at], res)
        return dp[col][at]
        dp[col][at] = (col!=b[at])
        for ch in g[at]:
            if ch == par:
            continue
            dp[col][at] += dfs(ch, at, b[at])
        return dp[col][at]

for _ in range(ii()):
    n = ii()
    a = [0] + li()
    b = [0] + li()
    g = [[] for i in range(n+1)]
    dp = []
    dp.append([-1 for i in range(n+1)])
    dp.append([-1 for i in range(n + 1)])
    dp.append([-1 for i in range(n + 1)])
    for i in range(n-1):
        x,y = li()
        g[x].append(y)
        g[y].append(x)
    print(dfs(1,0,2))
 