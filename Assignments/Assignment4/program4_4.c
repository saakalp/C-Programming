////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CheckVotingEligibility
//      Description   : It is used to check voting eligibility based on age
//      Input : Integer
//      Output : "Eligible for Voting" or "Not Eligible for Voting" or "Invalid Age"
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if (iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}