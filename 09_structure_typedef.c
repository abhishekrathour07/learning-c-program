#include <stdio.h>
#include <string.h>

 typedef struct employee
{
    char name[20];
    int sallery;
    int emp_Id;
}emp;
function(emp emp1)
{
    printf("The name of the employee is %s\n", emp1.name);
    printf("The sallery of the employee is %d\n", emp1.sallery);
    printf("The emp_id of the employee is %d\n", emp1.emp_Id);
}
void main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    //  ( *ptr).sallery = 63256; //or we can write ptr->sallery=63256
    ptr->sallery = 63256; // "->" This is  called arrow operator.
    ptr->emp_Id = 400;
    strcpy(ptr->name, "abhishek");
    printf("%d\n", e1.sallery);
    function(e1);
}