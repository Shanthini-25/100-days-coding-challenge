def graphColoring(graph, k, V):
    from collections import defaultdict
    col=[-1 for i in range(V)]
    def ispossible(color,src):
        for i in range(V):
            if graph[src][i]==1 and col[i]==color:
                    return False
        return True
    def recursion(src,col):
        if src>=V:
            return True
        for i in range(k):
            if ispossible(i,src):
                col[src]=i
                if recursion(src+1,col):
                    return True
                col[src]=-1
        return False
    return recursion(0,col)


t = int(input())
while(t>0):
    v = int(input())
    k = int(input())
    m = int(input())
    lst = [int(x) for x in input().strip().split()]
    grp = [[0 for i in range(v)] for j in range(v)]
    cnt = 0
    for i in range(m):
        grp[lst[cnt]-1][lst[cnt+1]-1]=1 
        grp[lst[cnt+1]-1][lst[cnt]-1]=1 
        cnt = cnt+2 
    if(graphColoring(grp,k,v)==True):
        print(1)
    else:
        print(0)