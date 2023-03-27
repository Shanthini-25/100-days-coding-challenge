#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int count=0;
        int s,w1,w2,w3;
        scanf("%d %d %d %d",&s,&w1,&w2,&w3);
        if((w1+w2+w3)<=s) count=1;
        if((w1+w2)<=s ||(w2+w3)<=s) count=2;
        else count=3;
        printf("%d\n",count);
    }
}