#include<stdio.h>

char checknum(int num)
{
    if(num>0)
    {
        printf("Positive");
    }
    else if (num<0)

    {
        printf("Negative");
    }

    else
    {
        printf("Zero");
    }
    
}

int main()
{
 int num;

 printf("Enter a  number :");
 scanf("%d",&num);
char result;
 printf("The Entered Number %d is %c",num,result);
 
 result=checknum(num);

return 0;
}