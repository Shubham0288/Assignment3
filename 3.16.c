//Write a program to check whether a given alphabet (uppercase),an alphabet (lowercase),a digit or a special character.
#include<stdio.h>
int main()
{
    char character;
    printf("Enter the character or digit : ");
    scanf("%c",&character);
    if(character>=65 && character<=90)
    {
        printf("Entered character is uppercase\n",character);
    }
    else
    {
        if(character>=97 && character<=122)
        {
            printf("Entered charater is lowercase\n",character);
        }
        else
        {
            printf("Entered character is digit or special character\n",character);
        }
    }
    return 0;
}