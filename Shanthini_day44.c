#include<stdio.h>
int main()
{
    int n,odd_cnt=0,even_cnt=0;
    printf("Enter the size of the array: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even_cnt++;
        }
        if(arr[i]%2!=0)
        {
            odd_cnt++;
        }
    }
    printf("Number of even elements: %d\n",even_cnt);
    printf("Number of odd elements: %d\n",odd_cnt);
}