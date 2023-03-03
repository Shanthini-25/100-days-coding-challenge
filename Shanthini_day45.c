#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("Smallest Number: %d\n",min);
    printf("Largest Number: %d\n",max);
}