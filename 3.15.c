//Write a program to check whether a given number is positive,negative,zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number : ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("Entered number is zero");
    }
    else
    {
       if(num>0)
       {
        printf("Entered number is positive");
       }
       else
       {
        printf("Entered number is negative");
       }
    }
    return 0;
}