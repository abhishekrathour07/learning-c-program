#include <stdio.h>

void main()
{
    int size, arr[100], i, max = 0;
    printf("Enter the sizeof array");
    scanf("%d", &size);
    printf("Elements of array are:\n");
    max = arr[0];
    for (i < 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        if (max < arr[i])
            max = arr[i];
    }
    printf("the max value is:%d", max);
}
