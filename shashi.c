#include <stdio.h>

int fact(int n)
{
   
    if (n == 1 || n == 0)
    {
        return 1;
    }
   return  fact(n - 1) * n;
}
void main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("%d", fact(n));
}