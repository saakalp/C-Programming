////////////////////////////////////////////////////////////////////////////
//
//      Function Name : ChkZero
//      Description   : Accepts a number from user and checks whether it contains 0 or not.
//      Input         : iNo (int)
//      Output        : BOOL (TRUE if 0 is present, FALSE otherwise)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    if (iNo == 0)
    {
        return TRUE;
    }
    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    printf("Enter number: ");
    scanf("%d", &iValue);
    bRet = ChkZero(iValue);
    if (bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }
    return 0;
}
