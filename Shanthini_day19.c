#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp = n;
    int dig,count=0;
    while(n)
    {
        dig = n%10;
        count++;
        n=n/10;
    }
    n=temp;
    int tot=0;
    while(n)
    {
        dig = n%10;
        tot = pow(dig,count)+tot;
        n=n/10;
    }
    if(temp==tot) printf("Armstrong Number");
    else printf("Not an Armstrong Number");
}