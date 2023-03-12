#include <stdio.h>
int min(int x, int y) {
    return (x < y) ? x : y;
}
int max(int x, int y) {
    return (x > y) ? x : y;
}
int maxProduct(int arr[], int n)
{
    if (n == 0) {
        return 0;
    }
    int max_ending = arr[0], min_ending = arr[0];
    int max_so_far = arr[0];
    for (int i = 1; i < n; i++)
    {
        int temp = max_ending;
        max_ending = max(arr[i], max(arr[i] * max_ending, arr[i] * min_ending));
        min_ending = min(arr[i], min(arr[i] * temp, arr[i] * min_ending));
        max_so_far = max(max_so_far, max_ending);
    }
    return max_so_far;
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
    printf("%d",maxProduct(arr, n));
    return 0;
}
