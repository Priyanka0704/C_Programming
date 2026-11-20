#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFactorial = 0, iOddFactorial = 0, iFactorialDiff = 0;
    iEvenFactorial = 1;
    iOddFactorial = 1;

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
        if(iNo % 2 != 0 )
        {
            iOddFactorial = iNo * iOddFactorial;
        }
        iNo--;
    }
    iFactorialDiff = iEvenFactorial - iOddFactorial;

    return iFactorialDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d", iRet);
    printf("\n");

    return EXIT_SUCCESS;
}