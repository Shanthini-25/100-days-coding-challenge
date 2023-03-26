for i in range(int(input())):
    n,b = map(int,input().split())
    area=0
    flag = 0 
    for i in range(n):
        w,h,p = map(int,input().strip().split())
        new_area = w*h 
        if(new_area > area and p<=b):
            area = new_area
            flag = 1 
    if(flag==1):
        print(area)
    else:
        print("no tablet")