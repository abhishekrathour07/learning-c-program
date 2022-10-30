#include <stdio.h>

void main()
{
    int n, sum = 0, digit, reverse = 0, num;

    printf("Enter the num\n");
    scanf("%d", &num);
    printf("Given number is %d\n", num);
    n = num;
    do
    {

        digit = num % 10;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        num = num / 10;

    } while (num != 0);
    printf(" sum =%d\n ", sum);
    printf("reverse = %d\n", reverse);
    if (n == reverse)
        printf("\ntrue");
    else
    {
        printf("\nfalse");
    }
}
