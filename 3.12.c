// Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter the alphabet : ");
    scanf("%c",&alpha);
    if(alpha>=65 && alpha<=90)
    {
        printf("Entered alphabet is uppercase\n",alpha);
    }
    else
    {
        if(alpha>=97 && alpha<=122)
        {
            printf("Entered alphabet is lowercase\n",alpha);
        }
    }
    return 0;
}