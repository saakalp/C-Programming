////////////////////////////////////////////////////////////////////////////
//
//      Function Name : DisplayDigit
//      Description   : Accepts a number from user and displays its digits in reverse order.
//      Input         : iNo (int)
//      Output        : None (Displays digits)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    DisplayDigit(iValue);
    return 0;
}
