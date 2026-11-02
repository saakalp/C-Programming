////////////////////////////////////////////////////////////////////////////
//
//      Function Name : OddDisplay
//      Description   : It displays odd numbers starting from 1 up to the given number.
//      Input         : Number (integer)
//      Output        : Odd numbers from 1 up to the given number.
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void OddDisplay(int iNo)
{
    int i = 1 ;
    while(i<= iNo)
    {
        printf("%d",i);
        i = i + 2;
    }
}
int main()
{

    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return EXIT_SUCCESS;
}