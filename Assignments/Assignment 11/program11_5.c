////////////////////////////////////////////////////////////////////////////
//
//      Function Name : RangeDisplayRev
//      Description   : Accepts a range from user and displays all numbers in between in reverse order.
//      Input         : iStart (int), iEnd (int)
//      Output        : None (Displays numbers in reverse)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }
    int iCnt = 0;
    for (iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter starting point: ");
    scanf("%d", &iValue1);
    printf("Enter ending point: ");
    scanf("%d", &iValue2);
    RangeDisplayRev(iValue1, iValue2);
    return 0;
}
