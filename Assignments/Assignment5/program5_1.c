////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : FindGreatest
//      Description   : It is used to find the greatest of three numbers
//      Input : Integer, Integer, Integer
//      Output : Integer
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void FindGreatest(int first, int second, int third)
{
    if (first >= second && first >= third)
    {
        printf("%d is the greatest.\n", first);
    }
    else if (second >= first && second >= third)
    {
        printf("%d is the greatest.\n", second);
    }
    else
    {
        printf("%d is the greatest.\n", third);
    }
}

int main()
{
    int first, second, third;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &first, &second, &third);

    FindGreatest(first, second, third);

    return EXIT_SUCCESS;
}