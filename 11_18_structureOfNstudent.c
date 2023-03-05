// Ques no. 18
#include <stdio.h>
struct student
{
    char firstName[50];
    int roll;
    float marks;
} s[10];

int main()
{
    int i,num;
    printf("Enter the number of students(<=10)\n");
    scanf("%d",&num);
    printf("Enter information of %d students:\n",num);
    for (i = 0; i < num; ++i)
    {
        s[i].roll = i + 1;
        printf("\nFor roll number%d,\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information of %d student\n\n",num);
    for (i = 0; i < num; ++i)
    {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}
