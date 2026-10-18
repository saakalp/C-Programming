////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : FindGreater
//      Description   : It is used to find the greater of two numbers
//      Input : Integer, Integer
//      Output : Integer
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreater(int first, int second)
{
    if (first > second)
    {
        printf("%d is Greater\n", first);
    }
    else if (second > first)
    {
        printf("%d is Greater\n", second);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}