#include<stdio.h>
int isPrime(int n)
{
    if(n==0 || n==1) return 0;
    if(n==2 || n==3) return 1;
    if(n%2==0) return 0;
    if(n%2!=0)
    {
        if(n%6==3) return 0;
        if(n%6==1 || n%6==5)
        {
            for(int i=5;i<n;i++)
            {
                if(n%i==0) return 0;
            }
            return 1;
        }
    }
    return 0;
}
int main()
{
    int num;
    scanf("%d",&num);
    if(isPrime(num)==1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
}