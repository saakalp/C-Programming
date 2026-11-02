////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description   : It displays a sequence of dollar and asterisk symbols based on the absolute value of the given number.
//      Input         : Number (integer)
//      Output        : A pattern of $ and * symbols.
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int i = 0;
    while( i <=abs(iNo))
    {
        printf("$");
        if(i < abs(iNo))
        {
            printf("*");
        }

        i++;
    }
}
int main()
{

    int iValue = 0;
    printf("enter the Number :\n");
    scanf("%d\n",&iValue);
    pattern(iValue);
    return EXIT_SUCCESS;
}
