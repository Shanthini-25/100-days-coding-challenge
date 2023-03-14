#include<stdio.h>
int main()
{
    int n,flag = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        while(arr[i]%2==0) arr[i]=arr[i]/2;
        while(arr[i]%3==0) arr[i]=arr[i]/3;
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[0]) flag = 1;
    }
    if(flag==0) printf("Yes");
    else printf("No");
}