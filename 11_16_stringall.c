// Ques no. 16
#include <stdio.h>
int main()
{
    char str[150];
    int i, vowels, consonants, digits, spaces, symbols;
    vowels = consonants = digits = spaces = symbols = 0;
    printf("Enter the string\n");
    gets(str);
    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U')
        {
            ++vowels;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            ++consonants;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            ++digits;
        }
        else if (str[i] == ' ')
        {
            ++spaces;
        }
        else
        {
            ++symbols;
        }
    }
    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nWhite spaces: %d", spaces);
    printf("\n special symbols: %d", symbols);
    return 0;
}