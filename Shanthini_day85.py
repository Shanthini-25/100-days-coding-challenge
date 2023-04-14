t = int(input())
mod = 1000000007
for _ in range(t):
    n, m, l = list(map(int, input().split()))
    s = input()
    v = input()
    e1 = list(map(int, input().split()))
    e2 = list(map(int, input().split()))
    adj = [[] for _ in range(n + 1)]
    count = {}
    for i in range(m):
        adj[e1[i] - 1].append(e2[i] - 1)
        adj[e2[i] - 1].append(e1[i] - 1)
        temp = [e1[i]-1, e2[i]-1]
        temp.sort()
        if tuple(temp) not in count:
            count[tuple(temp)] = 0
            count[tuple(temp)] += 1
    dp = [[0 for _ in range(l)] for _ in range(n)]
    for j in range(0, n):
        if s[0] == v[j]:
            dp[j][0] = 1
    for j in range(1, l):
        for i in range(0, n):
            if s[j] != v[i]:
            continue
            for k in adj[i]:
                dp[i][j] = (dp[i][j] + dp[k][j - 1]) % mod
    ans = 0
    for i in range(0, n):
        ans = (ans + dp[i][l - 1]) % mod
    if min(s) == max(s):
        for i in range(0, n):
            for j in range(i + 1, n):
                if v[i] == v[j] and (i,j) in count:
                    ans = (ans - pow(count[(i, j)], l - 1, mod) + mod) % mod
    print(ans)