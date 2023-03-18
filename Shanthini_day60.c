#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int arr[7];
        for(int i=0;i<7;i++)
        {
            scanf("%d",&arr[i]);
        }
        int sunny=0,rainy=0;
        for(int i=0;i<7;i++)
        {
            if(arr[i]==1) sunny++;
        }
        rainy = 7 - sunny;
        if(sunny>rainy) printf("Yes");
        else printf("No");
        printf("\n");
    }
}