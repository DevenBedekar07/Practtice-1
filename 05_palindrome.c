#include<stdio.h>

int main()
{
    int num,originalnum,reversednum=0,digit;

    printf("Enter a number :");
    scanf("%d",&num);

    originalnum=num;

    while(num>0)
    {
        digit = num %10;
        reversednum=reversednum*10+digit;
        num=num/10;
    }

    if(originalnum=reversednum)
    {
        printf("The Given Number is a Palindrome");
    }

    else
    {
        printf("The Given Number is not a Palindrome");
    }
    return 0;
}
