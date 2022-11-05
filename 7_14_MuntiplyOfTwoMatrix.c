#include <stdio.h>

void main()
{
    int a1[2][2], a2[2][2], sum[2][2], i, j;
    printf(" Enter the Elements in a1 are:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a1[i][j]);
        }
    }
    printf(" Entter the Elements in a2 are:\n");
    for (i = 0; i < 2; i++)
    {                           
        for (j = 0; j < 2; j++)
        {
            scanf("%d", &a2[i][j]);
        }
    }
    printf("Element in a1 are:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a1[i][j]);
        }
        printf("\n");
    }
    printf("element in a2 are:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", a2[i][j]);
        }
        printf("\n");
    }
    printf("multiplicatiom of a1 and a2 matrix are :\n");
    for (i = 0; i < 2; i++)
    {                  
        for (j = 0; j < 2; j++)
        {  
            sum[i][j] = a1[i][j] * a2[i][j];
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
