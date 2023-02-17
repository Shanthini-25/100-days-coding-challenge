#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    int len=0,i=0;
    while(s[i]!='\0')
    {
        len++;
        i++;
    }
    for(i=0;i<len;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            s[i]=s[i]-32;
        }
    }
    //printf("%d",len);
    printf("%s",s);
    
}