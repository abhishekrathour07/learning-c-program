// Write a program to find income tax of a person?
#include <stdio.h>
#include <conio.h>
void main()
{
    float income, tax = 0;
    printf("enter the  income ");
    scanf("%f", &income);
    if (income >= 250000 && income <= 500000)
    {
        tax += 0.05 * (income - 250000);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax += 0.2 * (income - 500000);
    }
    else if (income >= 1000000)
    {
        tax += 0.3 * (income - 1000000);
    }
    printf("tax should be paid is %f\n", tax);
}
