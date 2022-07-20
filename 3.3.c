// Write a program to check wheather given number is even number or odd number .
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("Entered number is even");
    }
    else
    {
        printf("Entered number is odd");
    }
    return 0;
}