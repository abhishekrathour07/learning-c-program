#include <stdio.h>

int checkPowerOf2(unsigned int num)
{
    // Check if the number has only one set bit
    if ((num & (num - 1)) != 0)
        return 0;
    return 1;
}

int main()
{
    unsigned int num = 0;

    printf("Enter Number: ");
    scanf("%d", &num);

    if (checkPowerOf2(num))
        printf("Given number is power of 2.\n");
    else
        printf("Given number is not power of 2.\n");

    return 0;
}