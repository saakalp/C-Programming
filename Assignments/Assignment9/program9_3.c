////////////////////////////////////////////////////////////////////////////
//
//      Function Name : EvenFactorial
//      Description   : It calculates and returns the product of all even numbers from the absolute value of the given number down to 2.
//      Input         : Number (integer)
//      Output        : Product of even numbers (integer).
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int EvenFactorial(int No)
{
    int Fact = 1;

    No = abs(No);

    while (No >= 2)
    {
        if (No % 2 == 0)
        {
            Fact = Fact * No;
        }
        No--;
    }

    return Fact;
}

int main()
{
    int Value = 0, Ret = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    Ret = EvenFactorial(Value);

    printf("Even Factorial of number is %d", Ret);

    return 0;
}