#include<stdio.h>
int fact(int dig)
{
    if(dig==0 || dig == 1)
    {
        return 1;
    }
    else
    {
        return dig*fact(dig-1);
    }
}
int isStrong(int n)
{
    int dig,sum=0;
    while(n)
    {
        dig = n%10;
        n = n/10;
        sum = sum+fact(dig);
    }
    return sum;
}
int main()
{
    int num;
    scanf("%d",&num);
    if(isStrong(num)==num)
    {
        printf("Strong Number");
    }
    else
    {
        printf("Not a Strong Number");
    }
}