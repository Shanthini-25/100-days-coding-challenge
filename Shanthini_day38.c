#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int len=0,i=0,j=0,count;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    for(i=0;i<len;i++)
    {
        count=0;
        for(j=0;j<len;j++)
        {
            if(s[i]==s[j])
            {
                count++;
                if(count>1)
                {
                    break;
                }
            }
        }
        if(count==1)
        {
            printf("%c ",s[i]);
        }
    }
}