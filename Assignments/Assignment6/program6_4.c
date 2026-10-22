////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CheckTriangle
//      Description   : It is used to check if three sides can form a triangle
//      Input : Three side lengths (integers)
//      Output : String indicating if the sides can form a triangle
//      Author : Sankalp Baban Devkar
//      Date : 22/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if (iSide1 <= 0 || iSide2 <= 0 || iSide3 <= 0)
    {
        printf("Invalid side lengths\n");
        return EXIT_FAILURE;
    }
    else if (iSide1 + iSide2 > iSide3 && iSide1 + iSide3 > iSide2 && iSide2 + iSide3 > iSide1)
    {
        printf("The given sides can form a triangle\n");
    }
    else
    {
        printf("The given sides cannot form a triangle\n");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter Three Sides: ");
    scanf("%d %d %d", &iSide1, &iSide2, &iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);
    return EXIT_SUCCESS;
}