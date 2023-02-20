#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int len=0,i=0;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    for(int i=0;i<len;i++)
    {
        if(s[i]!='(' && s[i]!=')' && s[i]!='[' && s[i]!=']' && s[i]!='{' && s[i]!='}')
        {
            printf("%c",s[i]);
        }
    }
    printf("\n");
}