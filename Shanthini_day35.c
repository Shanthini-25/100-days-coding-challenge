#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int len=0,i=0,sum=0;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=0;i<len;i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            sum = sum + (s[i]-48);
        }
    }
    printf("%d\n",sum);
    printf("%s",s);
}