 #include<stdio.h>

 int main()
 {
    int num1,num2,result;
    int *ptr1,*ptr2;

    printf("Enter the first number :");
    scanf("%d",&num1);

    printf("Enter the second number :");
    scanf("%d",&num2);

    ptr1=&num1;
    ptr2=&num2;

    result=*ptr1 + *ptr2;

    printf("The sum of the numbers is %d",result);

    return 0;


 }