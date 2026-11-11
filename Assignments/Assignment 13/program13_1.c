////////////////////////////////////////////////////////////////////////////
//
//      Function Name : CountEven
//      Description   : Accepts a number from user and returns the count of even digits.
//      Input         : iNo (int)
//      Output        : Count of even digits (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0, iCount = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
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
    iRet = CountEven(iValue);
    printf("%d\n", iRet);
    return 0;
}
