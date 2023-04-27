for k in range(int(input())):
    x=input()
    y=input()
    s=''
    for i in range(len(x)):
        if x[i]==y[i] and x[i]=='B':
            s+='W'
        elif x[i]==y[i] and x[i]=='W':
            s+='B'
        else:
            s+='B'
    print(s)