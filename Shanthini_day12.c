#include<stdio.h>
int sum_of_dig(int n)
{
    int dig,sum=0;
    while(n)
    {
        dig = n%10;
        sum = sum + dig;
        n = n/10;
    }
    return sum;
}
int main()
{
    int num;
    scanf("%d",&num);
    int res;
    res = sum_of_dig(num);
    printf("%d",res);
}