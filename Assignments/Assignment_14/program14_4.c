#include<stdio.h>
#include<stdlib.h>

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSumNonFact = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0 )
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return iSumNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}