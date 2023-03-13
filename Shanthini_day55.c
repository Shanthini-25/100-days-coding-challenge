#include <stdio.h>
#include <limits.h>
void swap(int *p1, int *p2)
{

    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void SpecialSort(int *arr1,int n)
{
    for(int i = 0 ; i < n-1 ; i++)
    {
        for(int k = 0 ; k<n-1-i ; k++)
        {
            if(arr1[k] > arr1[k+1])
            {
                swap(&arr1[k],&arr1[k+1]);
            }
        }
    }
    for(int i = 0 ; i<n ; i++)
    {
        //printf("%d ",arr1[i]);
    }
    printf("\n");
    int idx=0;
    while(arr1[idx] < 0)
    {
        idx++;
    }
    int start = idx,end = n-1;
    while(start<end)
    {
        swap(&arr1[start],&arr1[end]);
        start++;
        end--;
    }
    for(int i = 0 ; i<n ; i++)
    {
        //printf("%d ",arr1[i]);
    }
}
int MaximumScalarProduct(int *arr1,int *arr2,int n)
{
    int max,sop=0,id1,id2;
    for(int i = 0 ; i<n ; i++)
    {
        max = INT_MIN;
        for(int j = i ; j<n ; j++)
        {
            if((arr1[i]*arr2[j]) > max)
            {
                max = arr1[i]*arr2[j];
                id1 = i; id2 = j;
            }
        }
        sop = sop + max;
        swap(&arr1[i],&arr1[id1]);
        swap(&arr2[i],&arr2[id2]);
        for(int i = 0 ; i<n ; i++)
        {
            //printf("%d ",arr1[i]);
        }
        //printf("\n");
        for(int i = 0 ; i<n ; i++)
        {
            //printf("%d ",arr2[i]);
        }
    }
    return sop;
}
int main()
{
    int n;            
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&arr2[i]);
    }
    SpecialSort(arr1,n);
    printf("%d",MaximumScalarProduct(arr1,arr2,n));
    return 0;
}