#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        sum = sum+(n-i);
    }
    printf("%d",sum);
}