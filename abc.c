#include <stdio.h>

int main() {
    int num, originalNum, lastDigit, temp;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    
    // Find the last digit
    lastDigit = num % 10;
    
    // Find the number of digits in the number
    int numDigits = 0;
    while (num != 0) {
        num /= 10;
        numDigits++;
    }
    
    // Calculate the divisor to extract the first digit
    int divisor = 1;
    for (int i = 1; i < numDigits; i++) {
        divisor *= 10;
    }
    
    // Extract the first digit
    int firstDigit = originalNum / divisor;
    
    // Remove the first and last digits
    originalNum = originalNum - (firstDigit * divisor);
    originalNum = originalNum / 10;
    
    // Swap the first and last digits
    temp = lastDigit;
    lastDigit = firstDigit;
    firstDigit = temp;
    
    // Reconstruct the number with swapped digits
    int result = (lastDigit * divisor) + originalNum + (firstDigit * 10);
    
    printf("Number with first and last digits swapped: %d\n", result);

    return 0;
}
