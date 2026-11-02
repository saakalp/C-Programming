////////////////////////////////////////////////////////////////////////////
//
//      Function Name : RectArea
//      Description   : It calculates and returns the area of a rectangle by multiplying its width and height.
//      Input         : Width and height (float)
//      Output        : Area of the rectangle (double).
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float Width, float Height)
{
    double Area = 0.0;
    Area = Width * Height;
    return Area;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter width:");
    scanf("%f",&fValue1);

    printf("Enter height:");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of rectangle = %lf",dRet);

    return 0;
}