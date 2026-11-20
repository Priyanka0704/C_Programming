#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }
    else
    {
        while(iStart <= iEnd)
        {
            if(iStart % 2 == 0)
            {
                printf("%d\t", iStart);
            }
            iStart++;
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

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}