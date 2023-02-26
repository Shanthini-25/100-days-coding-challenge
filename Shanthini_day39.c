#include<stdio.h>
int isAnagram(char s1[], char s2[])
{
    int n1[256]={0},n2[256]={0};
    int i=0;
    while(s1[i]!='\0')  
    {  
        n1[s1[i] -'a']++;  
        i++;  
    }  
    i = 0;
    while(s2[i]!='\0')  
    {  
        n2[s2[i] -'a']++;  
        i++;  
    }  
    for(i=0;i<256;i++)  
    {  
        if(n1[i]!=n2[i])  
            return 0;  
    }  
    return 1;  
}
int main()
{
    char s1[1000],s2[1000];
    scanf("%s",s1);
    scanf("%s",s2);
    int count=0;
    count=isAnagram(s1,s2);
    if(count==1)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not an Anagram");
    }
}