#include<stdio.h>
int main()
{
    long long int num;
    scanf("%lld",&num);
    long long int count=0,temp,dig;
    temp = num;
    while(temp)
    {
        dig = temp%10;
        count++;
        temp = temp/10;
    }
    long long int arr[count],j=count-1,i;
    for(i=0;i<count;i++) arr[i]=0;
    temp = num;
    while(temp)
    {
        dig = temp%10;
        if(dig==0) arr[j]=1;
        else arr[j] = dig;
        j--;
        temp = temp/10;
    }
    for(i=0;i<count;i++)
    {
        printf("%lld",arr[i]);
    }
}