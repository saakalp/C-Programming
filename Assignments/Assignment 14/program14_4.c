////////////////////////////////////////////////////////////////////////////
//
//      Function Name : SumNonFact
//      Description   : Accepts a number and returns the summation of all its non-factors.
//      Input         : iNo (int)
//      Output        : Sum of non-factors (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt != 0)
        {
            iSum += iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    iRet = SumNonFact(iValue);
    printf("%d\n", iRet);
    return 0;
}
