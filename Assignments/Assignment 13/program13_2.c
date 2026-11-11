////////////////////////////////////////////////////////////////////////////
//
//      Function Name : CountOdd
//      Description   : Accepts a number from user and returns the count of odd digits.
//      Input         : iNo (int)
//      Output        : Count of odd digits (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iCount = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    iRet = CountOdd(iValue);
    printf("%d\n", iRet);
    return 0;
}
