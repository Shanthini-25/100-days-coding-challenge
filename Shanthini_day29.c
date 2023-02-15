#include<stdio.h>
int main()
{
    char s[100],s1[100],s2[100];
    scanf("%s",&s1);
    scanf("%s",&s2);
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        s[j]=s1[i];
        i++;
        j++;
    }
    i=0;
    while(s2[i]!='\0')
    {
        s[j]=s2[i];
        i++;
        j++;
    }
    s[j]='\0';
    printf("%s",s);
}