#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,h,bmi;
        scanf("%d %d",&m,&h);
        bmi = m/(h*h);
        if(bmi<=18) printf("1");
        else if(bmi>18 && bmi<=24) printf("2");
        else if(bmi>24 && bmi<=29) printf("3");
        else printf("4");
    }
}