// Write a program to taake the marks of 5 students from the user .Assume marks are given out of 100  and passing marks is 33 . Now display whether the candidate passed the examination or failed.
#include<stdio.h>
int main()
{
    float a,b,c,d,e,percentage;
    printf("Enter the marks of the five subjects : ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    percentage=((float)a+b+c+d+e)/5.0;
    if(percentage>33)
    {
        printf("Student was passed");
    }
    else
    {
        printf("Student was not passed");
    }
    return 0;
} 