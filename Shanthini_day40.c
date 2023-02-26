#include<stdio.h>
int main()
{
    char s1[1000],s2[1000],s3[1000];
    printf("Enter a string : ");
    scanf("%s",s1);
    printf("Enter a substring : ");
    scanf("%s",s2);
    printf("Enter a newstring : ");
    scanf("%s",s3);
    char s4[10000];
    int len_s1=0,len_s2=0,len_s3=0,i=0;
    while(s1[i]!='\0')
    {
        i++;
        len_s1++;
    }
    i=0;
    while(s2[i]!='\0')
    {
        i++;
        len_s2++;
    }
    i=0;
    while(s3[i]!='\0')
    {
        i++;
        len_s3++;
    }
    for(i=0;i<len_s3;i++)
    {
        s4[i]=s3[i];
    }
    int j=len_s2-1;
    while(s1[j]!='\0')
    {
        j++;
        s4[i]=s1[j];
        i++;
    }
    printf("%s",s4);
}