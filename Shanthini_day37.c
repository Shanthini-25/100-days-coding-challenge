#include<stdio.h>
int main()
{
    char s[1000];
    char hash[256]={0};
    scanf("%s",s);
    int len=0,i=0;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    for(int i=0;i<len;i++)
    {
        hash[s[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(hash[i]>0)
        {
            printf("The frequency of %c is %d\n",i,hash[i]);
        }
    }
}