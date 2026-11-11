////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Percentage
//      Description   : Calculates percentage based on total marks and obtained marks.
//      Input         : iTotal (int), iObtained (int)
//      Output        : Percentage (float)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

float Percentage(int iTotal, int iObtained)
{
    if (iTotal == 0)
    {
        return 0.0f;
    }
    return ((float)iObtained / (float)iTotal) * 100.0f;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;
    printf("Please enter total marks: ");
    scanf("%d", &iValue1);
    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);
    fRet = Percentage(iValue1, iValue2);
    printf("Percentage is %.2f%%\n", fRet);
    return 0;
}
