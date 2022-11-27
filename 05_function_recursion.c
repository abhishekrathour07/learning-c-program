//recursion concept is introduce in function?

#include <stdio.h>

int factorial(int x)
{
    if (x == 0 || x==1)
    {
        return 1;
    }
    else
    {
    printf("factorial order is %d\n",x);
        return x * factorial(x - 1);
    }
}
int main()
{
    int a ;
    printf("Enter the value of a ");
    scanf("%d",&a);
    printf(" The factorial of %d is %d ", a, factorial(a));
    return 0;
}
