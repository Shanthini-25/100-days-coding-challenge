#include<stdio.h>
int main()
{
    int num,dig,rem=0;
    scanf("%d",&num);
    while(num)
    {
        dig = num%10;
        rem = rem*10 + dig;
        num = num/10;
    }
    printf("%d",rem);
}