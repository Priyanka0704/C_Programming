#include<stdio.h>
#include<stdlib.h>

void RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;
    if(iStart > iEnd || (iStart < 0 || iEnd < 0))
    {
        printf("Invalid Range");
    }
    else if(iStart > 0 && iEnd > 0)
    {
        while(iStart <= iEnd)
        { 
            if(iStart % 2 == 0)
            {
                iSum = iSum + iStart;
            }
            iStart++;
        }

        printf("%d\t", iSum);
         
    }
    else
    {
        printf("Negative Numbers not allowed\n");
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

    RangeSumEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}