////////////////////////////////////////////////////////////////////////////
//
//      Function Name : FactDiff
//      Description   : Returns difference between summation of all factors and summation of non-factors.
//      Input         : iNo (int)
//      Output        : Difference (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSumFact += iCnt;
        }
        else
        {
            iSumNonFact += iCnt;
        }
    }
    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    iRet = FactDiff(iValue);
    printf("%d\n", iRet);
    return 0;
}
