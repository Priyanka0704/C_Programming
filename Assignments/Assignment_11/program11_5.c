#include<stdio.h>
#include<stdlib.h>

void RangeDisplay(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    else
    {
        while(iEnd >= iStart)
        {
            printf("%d\t", iEnd);
            iEnd--;
        }
    }
    
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point\n");
    scanf("%d",  &iValue1);

    printf("Enter ending point\n");
    scanf("%d",  &iValue2);

    RangeDisplay(iValue1, iValue2);

    return EXIT_SUCCESS;
}