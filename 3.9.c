// Write a program to find the greatest among the three given numbers.Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers : " );
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
    {
        if(num2>num1 && num2>num3)
        {
            printf("Greater number is %d",num2);
        }
        printf("Greater number is %d",num1);
    }
    else
    {
        printf("Greater number is %d",num3);
    }
    return 0;
} 