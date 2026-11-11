////////////////////////////////////////////////////////////////////////////
//
//      Function Name : MultDigits
//      Description   : Accepts a number from user and returns the multiplication of all its digits.
//      Input         : iNo (int)
//      Output        : Multiplication of digits (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo == 0)
    {
        return 0;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    iRet = MultDigits(iValue);
    printf("%d\n", iRet);
    return 0;
}
