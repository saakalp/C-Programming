////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : Display
//      Description   : It is used to display a number a specified number of times
//      Input : Integer, Integer
//      Output : Integer
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>


void Display (int iNo, int Frequency)

{   int iCnt=0;
    for(iCnt=1; iCnt<=Frequency; iCnt ++)
    {
        printf("%d",iNo);
    }
}
int main()
{
   int iValue =0;
   int iCount=0;

   printf("Enter the Number\n");
   scanf("%d",&iValue);

   printf("Enter the frequency\n");
   scanf("%d",&iCount);

   Display(iValue,iCount);

   return 0;
}