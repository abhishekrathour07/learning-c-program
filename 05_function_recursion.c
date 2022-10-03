//recursion concept is introduce in function?

#include <stdio.h>

int factorial(int x)
{
    printf("factorial order is %d\n",x);
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}
int main()
{
    int a = 6;
    printf(" The factorial of %d is %d ", a, factorial(a));
    return 0;
}
