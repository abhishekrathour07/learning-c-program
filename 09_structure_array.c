#include <stdio.h>
#include <string.h>

typedef struct employee
{
    char name[20];
    int sallery;
    int emp_Id;
} empno;
int main()
{
    empno mess[20];
    strcpy(mess[0].name, "abhishek");
    mess[0].sallery = 6363;
    mess[0].emp_Id = 2345;

    strcpy(mess[1].name, "saurabh");
    mess[1].sallery = 63655;
    mess[1].emp_Id = 32345;
    
    strcpy(mess[2].name, "ayush");
    mess[2].sallery = 63463;
    mess[2].emp_Id = 12345;

    strcpy(mess[3].name, "dewang");
    mess[3].sallery = 83463;
    mess[3].emp_Id = 1345;

    strcpy(mess[4].name, "Rohit");
    mess[4].sallery = 213463;
    mess[4].emp_Id = 135545;

    printf("The name of the employee is %s\n", mess[0].name);
    printf("The sallery of the employee is %d\n", mess[0].sallery);
    printf("The emp_id of the employee is %d\n", mess[0].emp_Id);

    printf("The name of the employee is %s\n", mess[1].name);
    printf("The sallery of the employee is %d\n", mess[1].sallery);
    printf("The emp_id of the employee is %d\n", mess[1].emp_Id);

    printf("The name of the employee is %s\n", mess[2].name);
    printf("The sallery of the employee is %d\n", mess[2].sallery);
    printf("The emp_id of the employee is %d\n", mess[2].emp_Id);

     printf("The name of the employee is %s\n", mess[3].name);
    printf("The sallery of the employee is %d\n", mess[3].sallery);
    printf("The emp_id of the employee is %d\n", mess[3].emp_Id);

     printf("The name of the employee is %s\n", mess[4].name);
    printf("The sallery of the employee is %d\n", mess[4].sallery);
    printf("The emp_id of the employee is %d\n", mess[4].emp_Id);

    return 0;
}
