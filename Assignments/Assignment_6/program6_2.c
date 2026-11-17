/*

    1.Check Admission Eligibility 

    Problem Sattement: A student is eligible for admission if the student's marks are at least 60 and age is atleast 17 years.
    Accept both values and determine eligibility. Negative age or marks outside 0-100 must be treated as invalid input.

    Expected Output:

    Input : 75  18 -> Eligible for Admission 
    Input : 55  19 -> Not Eligible 
    Input : 80  16 -> Not Eligible  


*/

#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks >= 60.00 && fMarks <= 100) && (iAge >= 17 && iAge != -iAge))
    {
        printf("Eligible for Admission\n");
    }
    else if((fMarks < 60 && fMarks > 0) || (iAge < 17 && iAge > 0))
    {
        printf("Not Eligible");
    }
    else
    {
        printf("Invalid input");
    }
    
    
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: \n");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
