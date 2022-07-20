// Write a program to check whether given year is leap or not.
#include<stdio.h>
int main()
{
    int YYYY;
    printf("Enter the year : ");
    scanf("%d",&YYYY);
    if(YYYY%100==0 && YYYY%400==0)
    {
        printf("Year is leap");
    }
    else
    {
        printf("Year is not leap");
    }
    return 0;
}