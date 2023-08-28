#include <stdio.h>
#include<math.h>

int main()
{
    int n, last, first, middle;
    int number, originalNumber, digitCount = 0;


    printf("Enter the number");
    scanf("%d", &number);
    int num = number;
    last = number % 10; 
    while (n >= 10)
    {
        n = n / 10;
    }
    first = n;
    while (originalNumber != 0) {
        originalNumber /= 10;
        digitCount++;
    }

    if (digitCount <= 2) {
        printf("The number after removing first and last digits: 0\n");
    } else {
        int firstDigit = (int)(n / pow(10, digitCount - 1));
        int lastDigit = n% 10;

        int result = (n - firstDigit * pow(10, digitCount - 1) - lastDigit) / 10;

       
    printf("Swap digit = %d%d%d", last, result, first);
    }
  
}
