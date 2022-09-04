// find multiplication table of 8 using for loop?
#include <stdio.h>
int main()
{
    int n = 8, i;
    for (i = 1; i < 11; i++)
    {
        printf("the table is %d x %d =%d\n", n, i, n * i);
    }

    return 0;
}