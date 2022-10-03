// Write a program to illustrate the use of arrow operator?

#include <stdio.h>

struct employee
{
    char name[20];
    int sallery;
    int emp_Id;
};
void main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    ptr->sallery = 63256;
    ptr->emp_Id = 400;
    strcpy(ptr->name, "abhishek");
    printf("%s\n", e1.name);
    printf("%d\n", e1.sallery);
    printf("%d\n", e1.emp_Id);
}