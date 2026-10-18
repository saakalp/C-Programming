////////////////////////////////////////////////////////////////////////////
//      
//      Function Name : DisplayGrade
//      Description   : It is used to display the grade based on marks
//      Input : Float
//      Output : "Grade: A", "Grade: B", "Grade: C", "Grade: D", "Fail" or "Invalid Marks"
//      Author : Sankalp Baban Devkar
//      Date : 18/10/2026
//
////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplayGrade(float marks)
{
    if (marks < 0 || marks > 100)
    {
        printf("Invalid Marks\n");
    }
    else if (marks >= 80)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 70)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 60)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 40)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float marks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &marks);

    DisplayGrade(marks);

    return EXIT_SUCCESS;
}