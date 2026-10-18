////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CheckEven
//      Description   : It is used to check if a number is even
//      Input : Integer
//      Output : Boolean
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#define TRUE  1
#define FALSE 0

typedef int BOOL;
BOOL CheckEven(int iNo)
{
    if(iNo%2)
    {
        return TRUE;
    }
    else
    {
         return FALSE;
    }
}

int main ()
{
    int iValue =0;
    BOOL bRet = FALSE;

    printf("enter number\n");
    sacnf("%d",&iValue);

    bRet=CheckEven(iValue);
    printf("%d",bRet);

    return 0;
}

