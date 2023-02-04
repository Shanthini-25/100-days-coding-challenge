#include<stdio.h>
int main()
{
    int x1,x2,y1,y2;
    scanf("%d %d",&x1,&y1);
    scanf("%d %d",&x2,&y2);
    int x3,y3;
    x3 = (x1*y2)+(x2*y1);
    y3 = (y1*y2);
    if(x3%y3==0) printf("%d/%d",x3/y3,1);
    else{
    printf("%d/%d",x3,y3);
    }
}