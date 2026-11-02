////////////////////////////////////////////////////////////////////////////
//
//      Function Name : FactorialDiff
//      Description   : It calculates the product of even numbers and the product of odd numbers up to the absolute value of the given number, then returns their difference.
//      Input         : Number (integer)
//      Output        : Difference between the even-number product and odd-number product (integer).
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int FactorialDiff(int No)
{
    int EvenFact = 1, OddFact = 1;

    int Temp = abs(No);

    while (Temp >= 2)
    {
        if (Temp % 2 == 0)
        {
            EvenFact = EvenFact * Temp;
        }
        else
        {
            OddFact = OddFact * Temp;
        }

        Temp--;
    }

    return EvenFact - OddFact;
}

int main()
{
    int Value = 0, Ret = 0;

    printf("Enter number: ");
    scanf("%d", &Value);

    Ret = FactorialDiff(Value);

    printf("Factorial difference is %d", Ret);

    return 0;
}