////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CalculateBonus
//      Description   : It is used to calculate the bonus based on salary and years of service.
//      Input : Salary (float) and years of service (int)
//      Output : Calculated bonus (float)
//      Author : Sankalp Baban Devkar
//      Date : 22/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if (fSalary < 0 || iYears < 0)
    {
        printf("Invalid salary or years of service\n");
        return EXIT_FAILURE;
    }
    else if (iYears >= 5)
    {
        fBonus = fSalary * 0.05f;
    }
    else if (iYears >= 5 && iYears >= 10)
    {
        fBonus = fSalary * 0.10f;
    }
    else
    {
        fBonus = 0.0f;
    }

    printf("Bonus = %.2f\n", fBonus);
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter Salary and years of service:");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);
    return EXIT_SUCCESS;
}