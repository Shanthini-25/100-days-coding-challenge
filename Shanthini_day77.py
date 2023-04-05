for i in range(int(input())):
    n=int(input())
    l = list(map(int,input().strip().split()))
    l = sorted(l)
    print((l[n-1]-l[0])*(l[n-2]))