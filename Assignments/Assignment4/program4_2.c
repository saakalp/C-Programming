////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CheckEvenOdd
//      Description   : It is used to check if a number is even or odd
//      Input : Integer
//      Output : "Even Number" or "Odd Number"
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int value)
{
    if (value % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int value = 0;

    printf("Enter a number: ");
    scanf("%d", &value);

    CheckEvenOdd(value);

    return EXIT_SUCCESS;
}