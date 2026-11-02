////////////////////////////////////////////////////////////////////////////
//
//      Function Name : KMToMeter
//      Description   : It converts a distance from kilometers to meters by multiplying the given value by 1000.
//      Input         : Distance in kilometers (integer)
//      Output        : Distance in meters (integer).
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMToMeter(int No)
{
    int Meter = 0;
    Meter = No * 1000;
    return Meter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance:");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in meter = %d",iRet);

    return 0;
}