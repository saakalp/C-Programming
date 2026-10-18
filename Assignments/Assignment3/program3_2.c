////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : DisplayFactor
//      Description   : It is used to display all factors of a given number
//      Input : Integer
//      Output : Integer
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
void DisplayFactor(int iNo)
{
    int i;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    printf("Factors of Number are:\n");
    for(i=1; i < iNo; i++)
    {
    if((iNo % i==0))
    {
        printf("%d\n",i);

    }
    }
}
int main()
{
    int iValue=0;

    printf("enter the number:\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}