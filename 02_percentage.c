
#include<stdio.h>

int main()
{
    char Name[50];
    int num;
    int marks1,marks2,marks3,marks4;
    float totalmarks;
    float per;

    printf("\n \n");

    printf("Enter the Student's Name: ");
    scanf("%s",&Name);
    

    printf("Enter the roll no : ");
    scanf("%d",&num);
	

    printf("\n \n");
    printf("Enter the marks of Subject 1 : \n");
    scanf("%d",&marks1);

       printf("Enter the marks of Subject 2 : \n");
    scanf("%d",&marks2);


   printf("Enter the marks of Subject 3 : \n");
    scanf("%d",&marks3);


   printf("Enter the marks of Subject 4 : \n");
    scanf("%d",&marks4);


totalmarks=marks1+marks2+marks3+marks4;

per=(totalmarks/400)*100;

printf("\n \n");

printf("--Student Details--\n");
printf("NAME : %s \n",Name);
printf("Student's Roll No : %d \n",num);
printf("Students Percentage : %f\n",per);

return 0;


}