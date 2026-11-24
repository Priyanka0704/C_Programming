#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMultiplication = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0 )
        {
            iMultiplication = iMultiplication * iCnt;
        }
    }
    return iMultiplication;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d\n", iRet);


    return EXIT_SUCCESS;
}