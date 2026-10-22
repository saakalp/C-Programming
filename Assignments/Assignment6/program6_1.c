////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CalculateElectricityBill
//      Description   : It is used to calculate the electricity bill based on the number of units consumed.
//      Input : Number of units consumed (integer)
//      Output : Calculated electricity bill (float)
//      Author : Sankalp Baban Devkar
//      Date : 22/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if (iUnits < 0)
    {
        printf("Invalid unit consumption\n");
        return EXIT_FAILURE;
    }
    else if (iUnits <= 100)
    {
        fBill = iUnits * 5;
    }
    else if (iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100) * 7);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) + ((iUnits - 200) * 10);
    }

    printf("Bill = %.2f\n", fBill);
}
int main()
{
    int iUnits;
    printf("Enter the number of units consumed: ");
    scanf("%d", &iUnits);
    CalculateElectricityBill(iUnits);
    return EXIT_SUCCESS;
}