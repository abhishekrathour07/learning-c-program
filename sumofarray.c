#include <stdio.h>

void main()
{
    int mark[100], size, i, max = 0;
    float sum = 0, avg;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Enter the element in the array\n");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &mark[i]);
        max = mark[0];
        if (mark[i] > max)       
            max = mark[i];       
        sum += mark[i],
            avg = sum / size;
    }
    printf("the maximum value of array is%d\n", max);
    printf("The sum is %f\n", sum);
    printf("The avg is %f\n", avg);
}
