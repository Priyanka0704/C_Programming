/*
    1.Write a program to find factorial of given number.

    Input  : 5
    Output : 120    (5*4*3*2*1)

    Input  : -5
    Output : 120    (5*4*3*2*1)

    Input  : 4
    Output : 24    (4*3*2*1)


*/

#include<stdio.h>
#include<stdlib.h>

void Factorial(int iNo)
{
    int iFactorial = 0;
    iFactorial = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iFactorial = iFactorial * iNo;
        iNo--; 
    }   
    printf("%d", iFactorial);
    
}

int main(int iNo)
{
    int iValue = 0;

    printf("Enter number\n");

    scanf("%d", &iValue);

    Factorial(iValue);

    return EXIT_SUCCESS;
}
