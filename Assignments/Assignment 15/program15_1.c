////////////////////////////////////////////////////////////////////////////
//
//      Function Name : PrintName
//      Description   : Accepts a full name from user and prints it back.
//      Input         : Name (char array)
//      Output        : None (Prints name)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{
    char Name[30];
    printf("Please enter full name: ");
    scanf("%[^\n]s", Name);
    printf("Your name is %s\n", Name);
    return 0;
}
