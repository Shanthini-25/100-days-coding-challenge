for i in range(int(input())):
 n,m=map(int,input().split())
 lst = ['']*n
 for k in range(m):
     s=[]
     s.extend(input().split()[1:])
     for w in range(n):
        if str(w) in s:
            lst[w]+="1"
        else:
            lst[w]+="0"
 print (len(set(lst)))