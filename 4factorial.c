// factorial of a small digit
#include <stdio.h>

int main()
{
    int i,  num;
    int factorial = 1;
    printf("enter the num\n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        factorial *= i;
    }
    printf("factorial of %d  is %d\n", num, factorial);
    return 0;
}