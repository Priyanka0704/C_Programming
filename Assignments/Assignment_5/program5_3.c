/*

    Calculate Student Grade

    Problem Statement : Accept the marks of student out of 100 and display the grade according to the following criteria.
    Marks Outside  

    Marks           Grade 

    90-100          A
    75-89           B
    60-74           C
    40-59           D
    Below 40        Fail

    Expected Output:

    Input : 85  ->  Grade B
    
    Input : 35  ->  Fail

    Input : 105 ->  Invalid Marks

*/


#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if(fMarks >= 90 && fMarks <= 100) 
    {
        printf("Garde A");
    }
    else if(fMarks >= 75 && fMarks <= 89)
    {
        printf("Grade B");
    }
    else if(fMarks >= 60 && fMarks <= 74)
    {
        printf("Grade C");
    }
    else if(fMarks >= 40 && fMarks <= 59)
    {
        printf("Garde D");
    }
    else if(fMarks <= 39 && fMarks >= 0)
    {
        printf("Fail");
    }
    else
    {
        printf("Invalid Marks");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: \n");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}