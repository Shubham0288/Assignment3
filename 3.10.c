// Write a program to which takes the cost price and selling price of the product from the user
//.Now calculate and print profit or loss percentage.
#include<stdio.h>
int main()
{
    float sp,cp,p,l,per,per1;
    printf("Enter the selling price and cost price of the product : ");
    scanf("%f%f",&sp,&cp);
    if(sp>cp)
    {
        p=sp-cp;
        printf("Profit=%f\n",p);
        per=(p/cp)*100;
        printf("Percentage of the profit is %f",per);
    }
    else
    {
        l=sp-cp;
        printf("Loss=%f\n",l);
        per1=(l/cp)*100;
        printf("Percentage of the loss is %f",per1);
    }
    return 0;
}