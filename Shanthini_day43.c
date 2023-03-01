#include<stdio.h>
int main()
{
    int n,odd=0,even=0,mixed=0;
    printf("Enter the size of the array : \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0) 
        {
            even++;
        }
        else if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    if(odd==n)
    {
        printf("Odd");
    }
    else if(even==n)
    {
        printf("Even");
    }
    else if((odd+even)==n)
    {
        printf("Mixed");
    }
}