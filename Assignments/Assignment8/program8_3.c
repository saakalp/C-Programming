////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Factorial
//      Description   : It calculates and returns the factorial of the absolute value of the given number.
//      Input         : Number (integer)
//      Output        : Factorial value (integer).
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int No)
{
    int i = 1;
    int Fact = 1;

    if(No < 0)
    {
        No = -No;
    }

    while(i <= No)
    {
        Fact = Fact * i;
        i++;
    }

    return Fact;
}

int main()
{
    int Value = 0, iRet = 0;

    printf("Enter number:");
    scanf("%d",&Value);

    iRet = Factorial(Value);

    printf("Factorial of number is %d",iRet);

    return 0;
}