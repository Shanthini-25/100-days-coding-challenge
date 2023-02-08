#include<stdio.h>
int isPrime(int num)
{
    if(num==0 || num==1) return 0;
    if(num==2 || num==3) return 1;
    if(num%2==0) return 0;
    if(num%2!=0)
    {
        if(num%6==3) return 0;
        if(num%6==1 || num%6==5)
        {
            for(int i=5;i<num;i++)
            {
                if(num%i==0) return 0;
            }
        }
        return 1;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int n1,n2,i,flag=0;
    for(i=1;i<=n;i++)
    {
        n1 = n-i;
        n2 = n-n1;
        if(isPrime(n1)==1 && isPrime(n2)==1)
        {
            flag = 1;
            printf("%d can be expressed as sum of %d and %d\n",n,n1,n2);
        }
    }
    if(i>n && flag==0)
    {
        printf("%d can't be expressed as sum of two primes",n);
    }
}