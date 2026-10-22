////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CheckAdmission
//      Description   : It is used to check the admission eligibility based on marks and age.
//      Input : Marks (float), Age (integer)
//      Output : String indicating admission status
//      Author : Sankalp Baban Devkar
//      Date : 22/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks,int i)
{
    float fMarks = 0.0f;
    int iAge = 0;

    if (fMarks < 0 || fMarks > 100 || iAge < 17)
    {
        printf("Invalid Marks\n");
        return EXIT_FAILURE;
    }
    else if (fMarks >= 90)
    {
        printf("Admission Granted with Scholarship\n", i);
    }
    else if (fMarks >= 75)
    {
        printf("Admission Granted\n", i);
    }
    else
    {
        printf("Admission Denied\n", i);
    }
}
int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks and age : ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}