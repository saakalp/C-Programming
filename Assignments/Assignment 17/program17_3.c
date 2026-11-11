////////////////////////////////////////////////////////////////////////////
//
//      Function Name : Pattern
//      Description   : Displays alternating character and number patterns row-wise.
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
    for (i = 1; i <= iRow; i++)
    {
        char ch = 'a';
        int iNo = 1;
        for (j = 1; j <= iCol; j++)
        {
            if (i % 2 != 0)
            {
                printf("%c\t", ch);
                ch++;
            }
            else
            {
                if (j == 1)
                {
                    printf("%d\t", 2);
                }
                else if (j == 2)
                {
                    printf("%d\t", 1);
                }
                else
                {
                    printf("%d\t", iNo);
                }
                iNo++;
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
