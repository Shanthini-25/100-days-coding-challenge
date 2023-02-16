#include <stdio.h>
int main()
{
    char s[1000];
    scanf("%s",s);
    int count=0,i=0;
    while(s[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}
