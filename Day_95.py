def solve(num):
    if num==1:
        return 0
    else:
        return num%2+solve(num//2)

n=int(input())
for i in range(n):
    num=int(input())
    print(solve(num)