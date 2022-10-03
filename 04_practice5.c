// Write a program to find the factorial of the given number.

#include <stdio.h>
int main()
{
    int num = 8, i=1, factorial = 1;
    //  for(i = 1; i <= num; i++)
    // {
    //     factorial *= i;
    // }
    while(i<=num){
        
        factorial*= i;
        i++;
    }
        printf("Factorial if %d is %d", num, factorial);
    return 0;
}
