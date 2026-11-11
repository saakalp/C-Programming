////////////////////////////////////////////////////////////////////////////
//
//      Function Name : NonFact
//      Description   : Accepts a number and displays all its non-factors.
//      Input         : iNo (int)
//      Output        : None (Displays non-factors)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    NonFact(iValue);
    return 0;
}
