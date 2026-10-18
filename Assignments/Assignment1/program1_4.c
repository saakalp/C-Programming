////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : checkEven
//      Description   : It is used to check if a number is even
//      Input : Integer
//      Output : Boolean
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL checkEven(int iNo)
{
    if((iNo%5) ==0)
    {
        return TRUE;

    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL bRet=FALSE;
    printf("Enter number\n");

    scanf("%d",&iValue);
    bRet=checkEven(iValue);
    if(bRet==TRUE)
    {
        printf("Divisible by 5");

    }
    else
    {
        printf("not divisible by 5");

    }

    return 0;
}