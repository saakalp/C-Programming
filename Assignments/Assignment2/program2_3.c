////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : Display
//      Description   : It is used to display "hello" if number is less than 10 otherwise display "Demo"
//      Input : Integer
//      Output : "hello" or "Demo"
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display ( int iNo)
{
    if(iNo<10)
    {
        printf("hello");

    }
    else
    {
       printf("Demo");

    }
}

int main()
{
    int iValue =0;
    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}