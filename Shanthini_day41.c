#include<stdio.h>
int main()
{
    char s1[1000],s2[1000];
    scanf("%s",s1);
    scanf("%s",s2);
    int i=0,len_1=0,len_2=0,flag=0;
    while(s1[i]!='\0')
    {
        i++; len_1++;
    }
    i=0;
    while(s2[i]!='\0')
    {
        i++; len_2++;
    }
    if(len_1==len_2){
        for(i=0;i<len_1;i++)
        {
            if(s1[i]==s2[i] || s1[i]=='*' || s1[i]=='?')
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("Yes they match");
    }
    else{
        printf("No they don't match");
    }
}