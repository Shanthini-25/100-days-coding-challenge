#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^\n]s",&s);
    int len = strlen(s);
    char temp[len];
    int j=len-1;
    for(int i=0;i<len;i++)
    {
        temp[j] = s[i];
        j--;
    }
    for(int i=0;i<len;i++)
    {
        printf("%c",temp[i]);
    }
}