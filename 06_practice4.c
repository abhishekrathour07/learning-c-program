// write  a program using a Function which calculate the sum and avg of two numbers.Use
// printf and print the value in main.

#include <stdio.h>

void sumAndAvg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
     *avg = (float)*sum / 2; 
}
void main()
{
    int i = 23, j = 32, sum;
    float avg;
    sumAndAvg(i, j, &sum, &avg);
    printf("the sum of the variable is %d\n", sum);
    printf("the avg of the variable is %.3f\n", avg);
}