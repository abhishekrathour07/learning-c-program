// find the greatest of four digits ?
#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c, d;
    printf("enter your number a :");
    scanf("%d", &a);
    printf("enter your number b :");
    scanf("%d", &b);
    printf("enter your number c :");
    scanf("%d", &c);
    printf("enter your number d :");
    scanf("%d", &d);
    if (a > b && a > b && a > c && a > d)
    {
        printf("a is greater number");
    }
    else if (b > a && b > c && b > d)
    {
        printf("b is greater number");
    }
    else if (c > a && c > b && c > d)
    {
        printf("c is greater number");
    }
    else
    {
        printf("d is greater number");
    }
}