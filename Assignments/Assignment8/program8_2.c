////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Dispaly
//      Description   : It is intended to display the English word for a single digit from 0 to 9; values outside this range display an invalid-input message.
//      Input         : Number (integer)
//      Output        : English word for the digit, or an invalid-input message.
//      Author        : Sankalp Baban Devkar
//      Date          : 02/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void Dispaly(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    swtich(iNo)
    {
        case 0 :
        printf("zero");
        break;

        case 1 :
        printf("one");
        break;

        case 2 :
        printf("two");
        break;


        case 3 :
        printf("three");
        break;


        case 4 :
        printf("four");
        break;


        case 5 :
        printf("five");
        break;


        case 6 :
        printf("six");
        break;

        case 7 :
        printf("seven");
        break;

        case 8 :
        printf("eight");
        break;

        case 9 :
        printf("Nine");
        break;

        default:
        printf("invalid Input");

    }

    }
    

int main()
{

    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}
