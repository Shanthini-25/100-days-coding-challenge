#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int k,x;
        scanf("%d %d",&k,&x);
        printf("%d",k-x);
    }
}