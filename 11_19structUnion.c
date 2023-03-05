// Ques no. 19
#include <stdio.h>
#include <string.h>
// struct student
// {
//     char name[20];
//     char rollcode[20];
//     float attendence;
// };
union student
{
    char name[12];
    char rollcode[18];
    float attendence;
};
void main()
{
    union student s1, s2, s3;
    printf("Enter the name of the student s1 : ");
    scanf("%s", s1.name);
    printf("Enter the Roll code of the student s1 : ");
    scanf("%s", s1.rollcode);
    printf("Enter the percentage of attendence of the student s1 : ");
    scanf("%f", &s1.attendence);

    printf("Enter the name of the student s2 : ");
    scanf("%s", s2.name);
    printf("Enter the Roll code of the student s2 : ");
    scanf("%s", s2.rollcode);
    printf("Enter the percentage of attendence of the student s2 : ");
    scanf("%f", &s2.attendence);

    printf("Enter the name of the student s3 : ");
    scanf("%s", s3.name);
    printf("Enter the roll code of the student s3 : ");
    scanf("%s", s3.rollcode);
    printf("Enter the percentage of attendence of the student s3 : ");
    scanf("%f", &s3.attendence);

         printf("Name of student  is :- %s\n", s1.name);
            printf("Roll code of student  is :- %s\n", s1.rollcode);
                    printf("Attendence of student  is :- %.2f\n", s1.attendence);

        printf("Name of student  is :- %s\n", s2.name);
                printf("Roll code of student  is :- %s\n", s2.rollcode);
                        printf("Attendence of student  is :- %.2f\n", s2.attendence);

        printf("Name of student  is :- %s\n", s3.name);
                printf("Roll code of student  is :- %s\n", s3.rollcode);
                        printf("Attendence of student  is :- %.2f\n", s3.attendence);

     
}
