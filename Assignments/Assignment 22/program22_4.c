////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description   : Accepts number of elements and displays # 1 * # 2 * # 3 * ... up to N.
//      Input         : iNo (int)
//      Output        : None (Displays pattern)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("Enter number of elements: ");
    scanf("%d", &iValue);
    Pattern(iValue);
    return 0;
}
