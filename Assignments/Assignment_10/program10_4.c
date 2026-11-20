#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    return (fTemp -32) * 5/9;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celcius is : %lf\n", dRet);

    return EXIT_SUCCESS;
}