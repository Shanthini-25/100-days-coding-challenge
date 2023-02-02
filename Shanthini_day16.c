#include<stdio.h>
int main()
{
    int num,sum=0;
    scanf("%d",&num);
    int check_factor;
    for(check_factor=1;check_factor<=num/2;check_factor++)
    {
        if(num%check_factor==0)
        {
            printf("%d\n",check_factor);
            sum=sum+check_factor;
        }
    }
    if(num==sum)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not a Perfect Number");
    }
}