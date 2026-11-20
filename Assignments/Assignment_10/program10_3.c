#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    return (iNo * 1000);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%d Meter\n", iRet);

    return EXIT_SUCCESS;
}