#include<stdio.h>
#include<stdlib.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iOddFactorial = 0;
    iOddFactorial = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while( iNo > 0 )
    {
        if(iNo % 2 != 0 )
        {
            iOddFactorial = iNo * iOddFactorial;
        }
        iNo--;
    }

    return iOddFactorial;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d", iRet);
    printf("\n");

    return EXIT_SUCCESS;
}