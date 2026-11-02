////////////////////////////////////////////////////////////////////////////
//
//      Function Name : FhtoCs
//      Description   : It converts a temperature from Fahrenheit to Celsius using the standard conversion formula.
//      Input         : Temperature in Fahrenheit (float)
//      Output        : Temperature in Celsius (double).
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float Temp)
{
    double Celsius = 0.0;

    Celsius = (Temp - 32) * 5.0 / 9.0;

    return Celsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius = %lf",dRet);

    return 0;
}