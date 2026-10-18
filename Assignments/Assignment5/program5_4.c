////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CheckMultipleDivisibility
//      Description   : It is used to check if a number is divisible by 3, 5, or both
//      Input : Integer, Integer
//      Output : Integer
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int number)
{
    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("%d is divisible by both 3 and 5.\n", number);
    }
    else if (number % 3 == 0)
    {
        printf("%d is divisible by 3 only.\n", number);
    }
    else if (number % 5 == 0)
    {
        printf("%d is divisible by 5 only.\n", number);
    }
    else
    {
        printf("%d is not divisible by either 3 or 5.\n", number);
    }
}

int main()
{
    int number = 0;

    printf("Enter number: ");
    scanf("%d", &number);

    CheckMultipleDivisibility(number);

    return EXIT_SUCCESS;
}