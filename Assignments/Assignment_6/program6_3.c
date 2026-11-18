/*
    3.Calculate Shppoing Discount

    Problem Statement: Accept the total purchase amount and calculate the final payable amount 
    after applying the following discount. Negative purchase amounts are invalid.
    
    
    Purchase Amount             Discount
    Below Rs. 1000                  0%
    Rs.1000 or below Rs.5000        10%
    Rs.5000 and above               20%


    Expected Output:
    Input : 800     ->  Payable Amount = 800.00
    Input : 2000    ->  Payable Amount = 1800.00
    Input : 6000    ->  Payable Amount = 4800.00   


*/

#include<stdio.h>
#include<stdlib.h>

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 0)
    {
        printf("Invalid Amount\n");
    }
    else if(fAmount > 0 && fAmount < 1000)
    {
        fDiscount = (fAmount * 0) / 100;
        printf("%f\n",fDiscount);

        fFinalAmount = fAmount - fDiscount;
        printf("%f\n", fFinalAmount);
    }
    else if(fAmount >= 1000 && fAmount < 5000)
    {
        fDiscount = (fAmount * 10) / 100;
        printf("%f\n",fDiscount);

        fFinalAmount = fAmount - fDiscount;
        printf("%f\n", fFinalAmount);
    }
    else
    {
        fDiscount = (fAmount * 20) / 100;
        printf("%f\n",fDiscount);

        fFinalAmount = fAmount - fDiscount;
        printf("%f\n", fFinalAmount);    
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: \n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}