#include<stdio.h>
#include<stdlib.h>

#define PI 3.14

double CircleArea(float fRadius)
{
    if(fRadius < 0.0f)
    {
        fRadius = -fRadius;
    }

    return (PI * fRadius * fRadius);
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Circle Area is : %lf\n", dRet);


    return EXIT_SUCCESS;
}