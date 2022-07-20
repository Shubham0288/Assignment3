//Write a program to chek wheather a given number is an even number or odd number without using % operator.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    if(num&1)
    {
        printf("Entered number is Odd");
    }
    else
    {
        printf("Entered number is Even");
    }
    return 0;
}