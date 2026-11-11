////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Multiply
//      Description   : Accepts three numbers and returns their multiplication (handling zero inputs).
//      Input         : iNo1 (int), iNo2 (int), iNo3 (int)
//      Output        : Multiplication result (int)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;
    if (iNo1 != 0) iAns *= iNo1;
    if (iNo2 != 0) iAns *= iNo2;
    if (iNo3 != 0) iAns *= iNo3;
    
    if (iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);
    iRet = Multiply(iValue1, iValue2, iValue3);
    printf("Multiplication is %d\n", iRet);
    return 0;
}
