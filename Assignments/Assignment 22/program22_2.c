////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description   : Accepts number of elements and displays numbers in reverse separated by '#'.
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
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
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
