// Ques no. 17
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
    printf("The value of A before is %d\n", a);
    printf("The value of B before is %d\n", b);
    swap(&a, &b);
    printf("The value of A  after is %d\n", a);
    printf("The value of B  after is %d\n", b);
}