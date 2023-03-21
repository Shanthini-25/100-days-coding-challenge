#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int w1,w2,x1,x2,m;
        scanf("%d %d %d %d %d",&w1,&w2,&x1,&x2,&m);
        int res,max_limit,min_limit,weight_diff;
        max_limit = x2*m;
        min_limit = x1*m;
        weight_diff = w2-w1;
        if(weight_diff<min_limit) res = 0;
        if(weight_diff>max_limit) res = 0;
        if(weight_diff==min_limit || weight_diff==max_limit ||
        (weight_diff>min_limit && weight_diff<max_limit)) res=1;
        printf("%d\n",res);
    }
}