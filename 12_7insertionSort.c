#include <stdio.h>

void main()
{
    int i, j, n, temp, a[25];
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    printf("Enter the unsorted array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        } 
        
        a[j + 1] = temp;
    }
    printf("Insertion sort are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
}