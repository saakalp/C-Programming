////////////////////////////////////////////////////////////////////////////
//
//      Function Name : CircleArea
//      Description   : It calculates and returns the area of a circle using the formula pi multiplied by radius squared (pi approximated as 3.14).
//      Input         : Radius (float)
//      Output        : Area of the circle (double).
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double CircleArea(float Radius)
{
    double Area = 0.0;
    Area = 3.14 * Radius * Radius;
    return Area;
}

int main()
{
    float Value = 0.0;
    double dRet = 0.0;

    printf("Enter radius:");
    scanf("%f",&Value);

    dRet = CircleArea(Value);

    printf("Area of circle = %lf",dRet);

    return 0;
}