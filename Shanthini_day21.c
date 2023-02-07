#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int temp,dig,rem;
    temp = num;
    while(num)
    {
        dig = num%10;
        rem = rem*10 + dig;
        num = num/10;
    }
    if(temp==rem) printf("Palindrome");
    else printf("Not a Palindrome");
}