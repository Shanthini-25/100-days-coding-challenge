# cook your dish here
for i in range(int(input())):
    n = int(input())
    res = ''
    for j in range(n):
        st = input()
        res = res + str(1-int(st[j]))
    
    print(res)