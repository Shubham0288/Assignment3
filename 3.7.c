// Write a program to check whether roots of the givenn quadratic equation are real and distinct,real and equal or imaginary roots.
#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("The the quadratic equation is ax^2+2ab+c=0 then enter values of a,b,c : \n");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-4*a*c;
    printf("TEhe value of d is %f \n",d);
    if(d>0)
    {
        if(d==0)
        {
            printf("Roots of the quadratic equation are Equal and Real");
        }
        printf("Roots of the quadratic equation are Real and Distinct");
    }
    else
    {
        printf("Roots of the quadratic equation are imaginary");
    }
    return 0;

}