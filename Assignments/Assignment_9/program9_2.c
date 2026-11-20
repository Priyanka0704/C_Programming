/*
    1.Accept amount in US dollar and return its corresponding value in Indian currency.Consider 1$ as 70rupees

    Input : 10
    Output : 700

*/


#include<stdio.h>
#include<stdlib.h>


int DollarToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");

    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return EXIT_SUCCESS;
}
