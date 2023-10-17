#include <stdio.h>

void main()
{
    int a[10], i, size, x;
    printf("Enter size of array:");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("enter %d elements:", i + 1);
        scanf("%d", &a[i]);
    }
    printf("enter value of x:");
    scanf("%d", &x);
    a[0] = x;
    for (i = size ; i > 0; i--)
    {
        a[i + 1] = a[i];
    }
    size++;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}
