
#include <stdio.h>

void main()
{
    int a[20][20], b[20][20], i, j, r, c, sum[20][20];
    printf("Enter the number of row");
    scanf("%d", &r);
    printf("enter the num of column");
    scanf("%d", &c);
    printf("Enter the element in matrix 1");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }  
    }
    printf("Enter the element in matrix 2");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf(" matrix 1\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf(" matrix 2\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the element in matrix 1\n");
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        sum[i][j] =a[i][j] -b[i][j];
        printf("%d\t",sum[i][j]);
    }
    printf("\n");
   }
}