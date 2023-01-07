#include <stdio.h>

int powers(int a, int b)
{
    int power = 1, i;
    for (i = 0; i < b; i++)
    {
        power *= a;
    }
    return power;
}
void main()
{
    int num, power;
    printf("Enter the number and power");
    scanf("%d %d", &num, &power);
    printf("%d^%d = %d",num,power,powers(num,power));
}