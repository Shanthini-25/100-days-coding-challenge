#include<stdio.h>
#include<limits.h>

int isPalindrome(int n)
{
    int temp=n,dig,rem=0;
    while(n)
    {
        dig = n%10;
        rem = rem*10 + dig;
        n=n/10;
    }
    if(rem==temp)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n,max=INT_MIN,len;
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
        if(isPalindrome(arr[i]))
        {
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
    }
    printf("%d",max);
}