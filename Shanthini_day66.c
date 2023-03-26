#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
        char s1[100],s2[100];
        scanf("%s",s1);
        scanf("%s",s2);
        int len1=0,len2=0,i=0,j=0,flag=0;
        while(s1[i]!='\0'){
            i++; len1++;
        }
        while(s2[j]!='\0')
        {
            j++; len2++;
        }
        for(i=0;i<len1;i++)
        {
            for(j=0;j<len2;j++)
            {
                if(s1[i]==s2[j]) flag++;
            }
        }
        if(flag>0) printf("Yes\n");
        else printf("No\n");
    }
}
