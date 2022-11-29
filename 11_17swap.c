#include <stdio.h>
void swap(int *a, int *b)
{
    int exchange;
    exchange = *a;
    *a = *b;
    *b = exchange;
}
void main()
{
    int a = 56, b = 99;
    printf("The value of A is %d\n", a);
    printf("The value of B is %d\n", b);
    swap(&a, &b);
    printf("The value of A is %d\n", a);
    printf("The value of B is %d\n", b);
}