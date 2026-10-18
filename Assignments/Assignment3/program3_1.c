////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : PrintEven
//      Description   : It is used to print even numbers up to a given number
//      Input : Integer
//      Output : Integer
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void PrintEven(int iNo)
{
    if (iNo<=0)
    {

        return;
    }
    PrintEven(iNo-1);
    if (iNo%2==0)
    {
        printf("%d\n", iNo);

    }
}
int main()
{

    int iValue =0;

    printf("Enter the Number:\n");

    scanf("%d",&iValue);

    PrintEven(iValue);
return 0;

}