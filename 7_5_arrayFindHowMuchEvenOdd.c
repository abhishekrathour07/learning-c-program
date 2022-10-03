// write a program to find how much even orodd array

#include <stdio.h>

void main()
{
    int arr[100], size, i, even = 0, odd = 0;
    printf("enter the size of Array\n");
    scanf("%d", &size);
    printf("enter the element in the Array:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
            odd++;
    }
    printf("the even number are %d\n", even);
    printf("the odd number are %d\n", odd);
}