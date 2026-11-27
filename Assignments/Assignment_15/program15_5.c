#include<stdio.h>
#include<stdlib.h>

float Percentage(int totalMarks, int obtMarks)
{
    float fPercentage = 0.0f;

    if(totalMarks > 0 && obtMarks > 0)
    {
        fPercentage = ((float)obtMarks /totalMarks) * 100;
    }    

    return fPercentage;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks \n");
    scanf("%d", &iValue1);


    printf("Please enter obtained marks \n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%f\n", fRet);                                                                                                                                                                                                                                         

    return EXIT_SUCCESS;
}