#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x,y;
        scanf("%d %d %d",&n,&x,&y);
        int can_carry;
        can_carry = (n+1)*y;
        if(can_carry > x) printf("Yes\n");
        else printf("No\n");
    }
}