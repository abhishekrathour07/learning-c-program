//legal or illagal statement and no operator confirm exponential
#include <stdio.h>
#include <math.h>
int main()
{
    int a = 4, b = 5;
    int z;
    z = a * b; // legal
    // a*b=z illiagal not allowed
    printf("the value of z is %d\n", z);

    int A = 40, B = 4;
    printf("A divided by B gives remainder %d\n", A % B);

    // no operator canmperform exponential
    // printf("the value of 4^5 is %d",4^5);--> wrong

    printf("the value of 4 to power 5 is %f\n", pow(4, 5));
    return 0;
}
