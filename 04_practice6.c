#include <stdio.h>

void main()
{
    int n, i, prime, min;
    printf("enter the no. to find prime \n");
    scanf("%d", &n);
    min = n / 2;
    for (i = 2; i <= min; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0)
    {
        printf("this is not a prime number");
    }
    else
    {
        printf("this is a prime number");
    }
}
