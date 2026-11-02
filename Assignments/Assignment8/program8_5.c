////////////////////////////////////////////////////////////////////////////
//
//      Function Name : TableRev
//      Description   : It displays the multiplication table of the absolute value of the given number from 10 down to 1.
//      Input         : Number (integer)
//      Output        : Multiples from N x 10 down to N x 1.
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int No)
{
    int i = 10;

    if(No < 0)
    {
        No = -No;
    }

    while(i >= 1)
    {
        printf("%d ",No * i);
        i--;
    }
}

int main()
{
    int Value = 0;

    printf("Enter number:");
    scanf("%d",&Value);

    TableRev(Value);

    return 0;
}