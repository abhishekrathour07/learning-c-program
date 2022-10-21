// sreaching Program/
#include <stdio.h>

int main()
{
    int a[20], i, search, size ,c;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    printf("Element in the array are\n ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be search\n");
    scanf("%d", &search);
    for (i = 0; i < size; i++)
    {
        if (a[i] == search)
        {
            printf("%d is position at %d position\n", search, i + 1);
          c=1;
          
        }
    }if(c==0)
    printf("Element in not present in the array");
}
