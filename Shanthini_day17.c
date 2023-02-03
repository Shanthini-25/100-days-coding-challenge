#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int check_factor;
    for(check_factor=1;check_factor<=num;check_factor++)
    {
        if(num%check_factor==0)
        {
            printf("%d ",check_factor);
        }
    }
}