////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Display
//      Description   : It is intended to display the integers from 1 up to the given number. The current loop condition prevents the loop from executing.
//      Input         : Number (integer)
//      Output        : No numbers are displayed with the current loop condition.
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int i = 0 ;
    for(i = 1; i <=0; i++)
    {
        printf("%d",i);
    }
}
int main()
{

    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}