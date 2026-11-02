////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Number
//      Description   : It displays a text label based on the range of the given number using conditional statements.
//      Input         : Number (integer)
//      Output        : One of the labels: Small, Large, or Boundary Number (depending on the conditions).
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo<50)
    {
        printf("Small");
    }
    else if((iNo <=5) &&  (iNo>=100))
    {
        printf("Medium");
    }
    else if (iNo < 100)
    {
        printf("Large");
    }
    else
    {
        printf("Boundary Number");
    }
}
int main()
{

    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}