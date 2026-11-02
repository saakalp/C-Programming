////////////////////////////////////////////////////////////////////////////
//
//      Function Name : DollarToINR
//      Description   : It converts the given amount in US dollars to Indian rupees using a fixed conversion rate of 70 INR per USD.
//      Input         : Amount in USD (integer)
//      Output        : Equivalent amount in INR (integer).
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DollarToINR(int No)
{
    return No * 70;
}

int main()
{
    int Value = 0, Ret = 0;

    printf("Enter amount in USD: ");
    scanf("%d", &Value);

    Ret = DollarToINR(Value);

    printf("Value in INR is %d", Ret);

    return 0;
}