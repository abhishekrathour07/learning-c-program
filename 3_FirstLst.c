#include <stdio.h>
int main()
{
    int n , last;
    printf("Enter number:");
    scanf("%d", &n);
    printf("Number = %d\n", n);
    last = n % 10;
    while (n >= 10)
    {
        n = n / 10;
    }
    printf("first digit = %d\n",n);
    printf("last digit = %d\n", last);
    return 0;
}