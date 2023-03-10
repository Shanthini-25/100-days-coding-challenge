#include<stdio.h>
void swap(int *p1,int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int start=0,end=n-1;
    for(int i=0;i<(n/2)+1;i++)
    {
        if(start<end)
        {
            swap(&arr[start],&arr[end]);
            start++;
            end--;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}