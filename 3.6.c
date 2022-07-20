// Write a program to print the greater number between two numbers.print one number of both are the same.
#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two numbers num1 and num2 : ");
    scanf("%d%d",&num1,&num2);
    if(num1>num2)
    {
        if(num1==num2)
        {
            printf("%d",num1);
        }
        printf("%d",num1);
    }
    else
    {
       printf("%d",num2);
    }
    return 0;
}