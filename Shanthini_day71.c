#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int boast = 0;
        for(int i=0;i<n;i++)
        {
            int lc=0,hc=0;
            for(int j=0;j<n;j++)
            {
                if(j!=i)
                {
                    if(arr[j]<=arr[i])
                    {
                        lc++;
                    }
                    else 
                    {
                        hc++;
                    }
                }
            }
            if(lc>=hc) boast++;
        }
        printf("%d\n",boast);
    }
}