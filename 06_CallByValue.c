#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 3, b = 4;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("the sum of a and b is %d\n", sum(a, b));
    printf("The value of a and b after the function call  is %d and %d\n", a, b);
    return 0;
}
int sum(int a, int b)
{
    a = 2345;
    b = 747;
    int c = a + b;
    return c;
}
