////////////////////////////////////////////////////////////////////////////
//
//      Function Name : CountFour
//      Description   : Accepts a number from user and counts the frequency of digit 4.
//      Input         : iNo (int)
//      Output        : Frequency of 4 (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCount = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
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
    iRet = CountFour(iValue);
    printf("%d\n", iRet);
    return 0;
}
