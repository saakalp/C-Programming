////////////////////////////////////////////////////////////////////////////
//
//      Function Name : MultipleDisplay
//      Description   : It displays the first five multiples of the given number.
//      Input         : Number (integer)
//      Output        : First five multiples of the given number.
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void MultipleDisplay(int iNo)
{
    int i = 1;
    while(i<=5)
    {
        printf("%d",iNo*i);
        i ++;
    }
}
int main()
{

    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return EXIT_SUCCESS;
}