T = int(input())
for i in range(T):
    N = int(input())
    S = list(input())
    count = 0
    while(S.count('1')!=0):
        cnt = 0
        t = 0
        for i in range(N):
            if(t==1):
                t = 0
                continue
            elif(S[i]=='1'):
                cnt += 1
                S[i]='0'
                t = 1
        if(cnt!=0):
            count += 1
        print(count)