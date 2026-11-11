////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description   : Displays alternating uppercase and lowercase character matrix patterns.
//      Input         : iRow (int), iCol (int)
//      Output        : None (Displays pattern)
//      Author        : Sankalp Baban Devkar
//      Date          : 11/11/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';
    char chSmall = '\0';
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1, ch = 'A', chSmall = 'a'; j <= iCol; j++, ch++, chSmall++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", ch);
            }
            else
            {
                printf("%c\t", chSmall);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);
    Pattern(iValue1, iValue2);
    return 0;
}
