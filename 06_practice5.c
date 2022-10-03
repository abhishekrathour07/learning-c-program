// Write a program to find value of i by using pointer to pointer concept.
#include <stdio.h>
int main()
{
    int i = 4, *j = &i, **K = &j;
    printf("the value of i is %d\n", i);
    printf("the value of i is %d\n", *j);
    printf("the value of i is %d\n", **K);
    return 0;
}
