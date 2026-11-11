////////////////////////////////////////////////////////////////////////////
//
//      Function Name : RangeSumEven
//      Description   : Accepts a range and returns the addition of all even numbers in between (positive range only).
//      Input         : iStart (int), iEnd (int)
//      Output        : Addition of even numbers (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    if (iStart > iEnd || iStart < 0 || iEnd < 0)
    {
        return -1;
    }
    int iCnt = 0, iSum = 0;
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            iSum += iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    printf("Enter starting point: ");
    scanf("%d", &iValue1);
    printf("Enter ending point: ");
    scanf("%d", &iValue2);
    iRet = RangeSumEven(iValue1, iValue2);
    if (iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }
    return 0;
}
