#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,p,mrk_ob,wrn,curr_mrk;
        scanf("%d %d %d",&n,&x,&p);
        wrn = n-x;
        mrk_ob = 3*x;
        curr_mrk = mrk_ob - wrn;
        if(curr_mrk>=p)
        {
            printf("Pass");
        }
        else{
            printf("Fail");
        }
    }
}