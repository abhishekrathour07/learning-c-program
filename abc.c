#include <stdio.h>

int sum(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return sum(n - 1) + n;
}
void main()
{
    int n;
    printf("Enter value of n:");
    scanf("%d", &n);
    printf("%d", sum(n));
}