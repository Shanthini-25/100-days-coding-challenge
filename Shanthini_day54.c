#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int arr1[m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]==arr1[j])
            {
                flag=1;
            }
        }
    }
    if(flag == 1)
    {
        printf("Not a Disjoint");
    }
    else 
    {
        printf("Disjoint");
    }
}