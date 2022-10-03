#include <stdio.h>
#include <string.h>
struct student
{
    char roll_code[22];
    float attendence;
    char name[15];
};
void main()
{
    struct student s1;
    strcpy(s1.name, "Abhishek singh");
    strcpy(s1.roll_code, "AGS22ABCA026");
    s1.attendence = 64.80;
    printf("Name of student  is :- %s\n", s1.name);
    printf("Roll code of student  is :- %s\n", s1.roll_code);
    printf("Attendence of student  is :- %.2f\n", s1.attendence);
}