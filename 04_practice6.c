// write a program to find prime number as input taken by users
#include <stdio.h>

void main()
{
    int num, i, prime, min;
    printf("enter the no. to find prime \n");
    scanf("%d", &num);
    min = num / 2;
    for (i = 2; i <= min; i++)
    {
        if (num % i == 0)
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
