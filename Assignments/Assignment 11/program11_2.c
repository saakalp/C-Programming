////////////////////////////////////////////////////////////////////////////
//
//      Function Name : RangeDisplayEven
//      Description   : Accepts a range from user and displays all even numbers in between that range.
//      Input         : iStart (int), iEnd (int)
//      Output        : None (Displays even numbers)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    if (iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }
    int iCnt = 0;
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if (iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
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
    RangeDisplayEven(iValue1, iValue2);
    return 0;
}
