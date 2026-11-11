////////////////////////////////////////////////////////////////////////////
//
//      Function Name : MultFact
//      Description   : Accepts a number and returns the multiplication of its factors.
//      Input         : iNo (int)
//      Output        : Multiplication of factors (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0, iMult = 1;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);
    iRet = MultFact(iValue);
    printf("%d\n", iRet);
    return 0;
}
