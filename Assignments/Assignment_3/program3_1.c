//Write a program which accept 

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCount = 0;
    iCount =1;

    if(iNo <= 0)
    {
        return;
    }

    while(iNo > 0)
    {
        if(iCount % 2 == 0)
        {
            printf("%d\t", iCount);
            iNo--;
        }
        iCount++;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter Number \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}