// Write a program to check wheather a given number is positive or nin-positive.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    if(num>0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is non-positive");
    }
    return 0;
}