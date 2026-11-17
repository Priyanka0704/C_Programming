/*

    Identify Character Type

    Problem Statement : Accept a single character and determine whether it is an uppercase alphabet, lower case alphabet,
    digit, or special character.Use character comparision without using library character classification functions
    
    Expected Output:

    Input : A   -> Uppercase Alphabet
    
    Input : m   -> Lowercase Alphabet 

    Input : 7   -> Digit

    Input : @   -> Special Character

*/


#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if(cValue <= 90 && cValue >=65)
    {
        printf("Uppercase Alphabet");
    }
    else if(cValue >= 97 && cValue <= 122)
    {
        printf("Lowercase Alphabet");
    }
    else if(cValue >= 48 && cValue <= 57)
    {
        printf("Digit");
    }
    else
    {
        printf("Special Chraacter");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a Character: \n");
    scanf("%c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}