#include<stdio.h>
int main()
{
    int n,sum=0;
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
        sum = sum+arr[i];
    }
    printf("Sum of elements of the array is: %d",sum);
}