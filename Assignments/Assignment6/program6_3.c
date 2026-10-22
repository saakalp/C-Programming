////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CalculateDiscount
//      Description   : It is used to calculate the discount based on the purchase amount.
//      Input : Purchase amount (float)
//      Output : Calculated discount (float)
//      Author : Sankalp Baban Devkar
//      Date : 22/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if (fAmount < 0)
    {
        printf("Invalid amount\n");
        return EXIT_FAILURE;
    }
    else if (fAmount >= 1000)
    {
        fDiscount = fAmount * 0.0f;
    }
    else if (fAmount >= 5000 && fAmount <= 5000)
    {
        fDiscount = fAmount * 0.10f;
    }
    else if (fAmount > 5000)
    {
        fDiscount = fAmount * 0.20f;
    }
    else
    {
        fDiscount = 0.0f;
    }
}
int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}