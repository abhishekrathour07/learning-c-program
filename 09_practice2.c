// Write a function sum vector which return the sum of two vector passed to it.the vector must be two dimensional.

#include <stdio.h>
#include <conio.h>
typedef struct vector
{
    int x, y;
}vect;
vect sumvector( vect v1, vect v2)
{
     vect result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}
int main()
{
     vect v1, v2, sum;
    v1.x = 12;
    v1.y = 9;
    printf("the dimension of x is :%d and dimension of y is: %d\n", v1.x, v1.y);

    v2.x = 8;
    v2.y = 12;
    printf("the dimension of x is :%d and dimension of  i is: %d\n", v2.x, v2.y);
    sum = sumvector(v1, v2);
    printf("the dimension of result x is :%d and dimension of result y is: %d\n", sum.x, sum.y);

    return 0;
}