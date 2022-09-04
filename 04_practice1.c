// write a program to find muntiplicatin table of a given no using forr loop?

#include <stdio.h>
#include <conio.h>
void main()
{
    int number, i;
    printf("enter  the number that you want a table");
    scanf("%d", & number);
    for (i=1; i < 11; i++)
    {
        printf("the table is %d x %d= %d\n is",number,i,i*number);
    }
}