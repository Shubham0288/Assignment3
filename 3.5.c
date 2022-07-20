// Write a program to check whether a given number is a three-digit number or not.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    if(num>99 && num<1000)
    {
        printf("Entered number is three digit number");
    }
    else
    {
        printf("Entered number is not three three digit number");
    }
    return 0; 
}