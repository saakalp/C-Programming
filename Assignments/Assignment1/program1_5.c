////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : Accept
//      Description   : It is used to accept a number and display asterisks
//      Input : Integer
//      Output : "*"
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
void Accept (int iNo)
{
    int iCnt =0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue =0;
    iValue=5;

    Accept(iValue);
    return 0;
}
