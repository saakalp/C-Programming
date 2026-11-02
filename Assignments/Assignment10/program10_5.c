////////////////////////////////////////////////////////////////////////////
//
//      Function Name : SquareMeter
//      Description   : It converts an area from square feet to square meters using the conversion factor 0.0929.
//      Input         : Area in square feet (integer)
//      Output        : Area in square meters (double).
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    double Meter = 0.0;

    Meter = iValue * 0.0929;

    return Meter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter = %lf",dRet);

    return 0;
}