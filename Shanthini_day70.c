#include<stdio.h>
void swap(int *p1,int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
void reverse(int arr[],int s,int e)
{
    while(s<e)
    {
        swap(&arr[s++],&arr[e--]);
    }
}
void rotateArr(int arr[], int n, int d) {
    d=d%n;
    reverse(arr,0,n-d-1);
    reverse(arr,n-d,n-1);
    reverse(arr,0,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int k=1;
    rotateArr(arr,n,k);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}