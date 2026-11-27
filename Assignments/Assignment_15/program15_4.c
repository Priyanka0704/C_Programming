#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMultiplication = 0;

    if((iNo2 == 0 ) && (iNo3 == 0))
    {
        iMultiplication = iNo1;
    }
    else if((iNo1 == 0 ) && (iNo3 == 0))
    {
        iMultiplication = iNo2;
    }
    else if((iNo1 == 0) && (iNo2 == 0))
    {
        iMultiplication = iNo2;
    }
    else if((iNo1 != 0) && (iNo2 != 0) && (iNo3 != 0) )
    {
        iMultiplication = iNo1 * iNo2 * iNo3;
    }
    else if(iNo1 == 0)
    {
        iMultiplication = iNo2 * iNo3;
    }
    else if(iNo2 == 0)
    {
        iMultiplication = iNo1 * iNo3;
    }
    else if(iNo3 == 0)
    {
        iMultiplication = iNo1 * iNo2;
    }
    
    return iMultiplication;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers\n");

    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}