#include <stdio.h>
#include <math.h>

int main()
{
    int number, originalNumber, digitCount = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);
    originalNumber = number;

    while (originalNumber != 0)
    {
        originalNumber /= 10;
        digitCount++;
    }

    if (digitCount <= 2)
    {
        printf("The number after removing first and last digits: 0\n");
    }
    else
    {
        int firstDigit = (int)(number / pow(10, digitCount - 1));
        int lastDigit = number % 10;
        int result = (number - firstDigit * pow(10, digitCount - 1) - lastDigit) / 10;
        // (1234-1* 1000-4)/10
        printf("The number after removing first and last digits: %d%d%d\n", lastDigit, result, firstDigit);
    }

    return 0;
}
