// write a program to find prime number as input taken by users
#include <stdio.h>

int main()
{
    int num, i, min = 0, prime = 0;
    printf("Enter the number to check prime:");
    scanf("%d", &num);
    min = num / 2;
    for (i = 2; i <= min; i++)
    {
        if (num % i == 0)
        {
            printf("Number is not prime");
            prime = 1;
            break;
        }
    }
    if (prime == 0)
        printf("Number is prime");
    return 0;
}