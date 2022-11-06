#include <stdio.h>
void table(int num, int i)
{
    printf(" \n");
    printf(" %d x %d = %d ", num, i, (num * i));
    if (i < 10)
        return table(num, i + 1);
}
void main()
{
    int num;
    printf("enter the num to find multiplication table ");
    scanf("%d", &num);
    table(num, 1);
}