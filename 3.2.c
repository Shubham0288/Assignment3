// Write a program to check wheather given number is divisible by 5 or not.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Not divisible by 5");
    }
    return 0;
}