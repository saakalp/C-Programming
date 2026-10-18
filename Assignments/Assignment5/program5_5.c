////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : CheckCharacterType
//      Description   : It is used to check the type of a character
//      Input : Character
//      Output : String indicating the type of character
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType(char value)
{
    if (value >= 'A' && value <= 'Z')
    {
        printf("Uppercase Alphabet\n");
    }
    else if (value >= 'a' && value <= 'z')
    {
        printf("Lowercase Alphabet\n");
    }
    else if (value >= '0' && value <= '9')
    {
        printf("Digit\n");
    }
    else
    {
        printf("Special Character\n");
    }
}

int main()
{
    char value = ' ';

    printf("Enter a character: ");
    scanf(" %c", &value);

    CheckCharacterType(value);

    return EXIT_SUCCESS;
}