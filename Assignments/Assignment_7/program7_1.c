/*
    1.Write a program which accept number from user and print that number of $ & * on screen

    Input : 5
    Output : $  *   $   *   $   *   $   *   $   *


    Input : 3
    Output : $  *   $   *   $   *

    Input : -3
    Output: $  *   $   *   $   * 

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)
    {
        printf("$\t*\t");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}