#include<stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int i=0,count=0;
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    for(int i=0;i<count;i++)
    {
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u'
        && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U')
        {
            printf("%c",s[i]);
        }
    }
}