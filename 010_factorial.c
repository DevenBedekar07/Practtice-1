#include<stdio.h>

int factorial(int num)
{
    if(num==0||num==1)
    {
        return 1;
    }

    else
    {
        return num*factorial(num-1);
    }
}

int main()
{
    int num,result;

    printf("Enter the mnumber :");
    scanf("%d",&num);  

    result=factorial(num);

    printf("The factorial of the number %d is %d ",num,result);

    return 0;  
}