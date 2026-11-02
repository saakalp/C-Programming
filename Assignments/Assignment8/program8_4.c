////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Table
//      Description   : It displays the multiplication table of the absolute value of the given number from 1 to 10.
//      Input         : Number (integer)
//      Output        : Multiples from N x 1 through N x 10.
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int No)
{
    int i = 1;

    if(No < 0)
    {
        No = -No;
    }

    while(i <= 10)
    {
        printf("%d ",No * i);
        i++;
    }
}

int main()
{
    int Value = 0;

    printf("Enter number:");
    scanf("%d",&Value);

    Table(Value);

    return 0;
}