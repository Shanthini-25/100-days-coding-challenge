#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int row,col;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=(2*row-1);col++)
        {
            printf("*");
        }
        printf("\n");
    }
}