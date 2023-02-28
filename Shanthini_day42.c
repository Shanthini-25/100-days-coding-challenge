#include<stdio.h>
int main()
{
    int a,b,flag=0;
    printf("Enter the size of the first array: \n");
    scanf("%d",&a);
    printf("Enter the size of the second array: \n");
    scanf("%d",&b);
    int arr1[a],arr2[b];
    printf("Enter the elements of first array: \n");
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of second array: \n");
    for(int i=0;i<b;i++)
    {
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<a;i++)
    {
        if(arr1[i]==arr2[i])
        {
            flag = 1;
        }
    }
    if(flag==1)
    {
        printf("Same");
    }
    else
    {
        printf("Not Same");
    }
}