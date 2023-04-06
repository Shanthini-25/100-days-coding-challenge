# cook your dish here
def func(a):
    ans = 0
    n = len(a)
    for i in range(n):
        k = i+1 
        for j in range(i+2,n):
            mid = (a[i]+a[j])/2
            while((k<j-1) and (abs(a[k+1]-mid) <= abs(a[k]-mid))):
                k=k+1 
            ans = ans + (a[k]-a[i])* (a[j]-a[k])
            
    return ans 

for i in range(int(input())):
    n = int(input())
    a = list(map(int,input().strip().split()))
    print(func(a))