#include<stdio.h>

int main()
{
    int n;
    float sum=0,average;

    printf("Enter the number of elements :\n");
    scanf("%d",&n);

    float numbers[n];

    printf("Enter %d Elements :\n",n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Element %d :",i+1);
        scanf("%f",&numbers[i]);
        sum+=numbers[i];
    }

    
    average=sum/n;

    printf("The sum of the Elements is %f \n",sum);
    printf("The average of the Elements is %.2f \n",average);
    


        
    


return 0;
}