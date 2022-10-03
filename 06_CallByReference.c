#include <stdio.h>
void Wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int a = 4, b = 8;
    printf("the value of a and b before swap is %d and %d\n  ", a, b);
    //  Wrong_swap(a,b);  // because of call by value
    swap(&a, &b); // righr because of call by reference
    printf("the value of a and b  after swap is %d and %d\n ", a, b);
}
void Wrong_swap(int a, int b)
{
    int exchange;
    exchange = a;
    a = b;
    b = exchange;
}
void swap(int *a, int *b)
{
    int exchange;
    exchange = *a;
    *a = *b;
    *b = exchange;
}
