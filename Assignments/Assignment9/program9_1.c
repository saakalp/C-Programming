////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Display
//      Description   : It displays a row of asterisks followed by a row of hash symbols, each repeated according to the absolute value of the given number.
//      Input         : Number (integer)
//      Output        : N asterisks followed by N hash symbols.
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int No)
{
    int i = 1;
    No = abs(No);

    while (i <= No)
    {
        printf("*  ");
        i++;
    }

    i = 1;

    while (i <= No)
    {
        printf("#  ");
        i++;
    }
}

int main()
{
    int Value = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    Display(Value);

    return 0;
}