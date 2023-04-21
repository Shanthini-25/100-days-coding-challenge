# cook your dish here
n=int(input())
l=[]
l2=[]
c=0
m=[]
for i in range(n):
    f=input()
    sub=set()
    l3=['0'*(8-len(x))+x for x in f]
    l2.append(l3)
    m.append(int(f,2))
    

for i in range(n-1):
    for j in range(i+1,n):
        if l2[i][j][-1]=='0' and m[i]&m[j]!=0:
            c+=2
print(c)