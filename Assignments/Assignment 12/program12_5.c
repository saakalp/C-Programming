////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Count
//      Description   : Accepts a number and counts digits which are less than 6.
//      Input         : iNo (int)
//      Output        : Count of digits less than 6 (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCount = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit < 6)
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
    iRet = Count(iValue);
    printf("%d\n", iRet);
    return 0;
}
