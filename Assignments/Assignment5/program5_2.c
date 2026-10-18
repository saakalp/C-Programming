////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CheckLeapYear
//      Description   : It is used to check if a year is a leap year
//      Input : Integer
//      Output : "Leap Year" or "Not a Leap Year"
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int year)
{
    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
    {
        printf("%d is a Leap Year.\n", year);
    }
    else
    {
        printf("%d is not a Leap Year.\n", year);
    }
}

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    CheckLeapYear(year);

    return EXIT_SUCCESS;
}