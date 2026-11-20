#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iEvenFactorial = 0;
    iEvenFactorial = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while( iNo > 0 )
    {
        if(iNo % 2 == 0 )
        {
            iEvenFactorial = iNo * iEvenFactorial;
        }
        iNo--;
    }

    return iEvenFactorial;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);
    printf("\n");

    return EXIT_SUCCESS;
}