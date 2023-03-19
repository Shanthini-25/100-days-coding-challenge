#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        if(a+b<3) printf("1");
        if(a+b >= 3 && a+b <=10) printf("2");
        if(a+b >=11 && a+b <=60) printf("3");
        if(a+b > 60) printf("4");
        printf("\n");
    }
}