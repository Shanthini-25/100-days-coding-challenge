#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int i=0,len=0;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    for(int i=0;i<len;i++)
    {
        if(i==0 || i==len-1)
        {
            printf("%c",s[i]-32);
        }
        else
        {
            printf("%c",s[i]);
        }
    }
}