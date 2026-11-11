////////////////////////////////////////////////////////////////////////////
//
//      Function Name : CountDiff
//      Description   : Returns difference between summation of even digits and summation of odd digits.
//      Input         : iNo (int)
//      Output        : Difference (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iSumEven += iDigit;
        }
        else
        {
            iSumOdd += iDigit;
        }
        iNo = iNo / 10;
    }
    return iSumEven - iSumOdd;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    iRet = CountDiff(iValue);
    printf("%d\n", iRet);
    return 0;
}
