#include <stdio.h>

void main()
{
    int arr[25], i, size, search;
    printf("Enter the size of array\n");
    scanf("%d", &size);
    printf("Enter the element in the array :\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number of the occurance to be search\n");
    scanf("%d", &search);
    for (i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            printf("%d is position at %d in this array\n", search, i + 1);
        }
    }
}