////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Display
//      Description   : It displays the integers from the negative of the given number through the given number.
//      Input         : Number (integer)
//      Output        : Integers from -N to N.
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int i = -iNo;
    while(i<=iNo)
    {
        printf("%d",i);
        i ++;
    }
}
int main()
{

    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}