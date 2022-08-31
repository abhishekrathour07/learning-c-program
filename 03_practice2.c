// Write a program to find marks of a student assume three sub and every sub must be 40 marks and total percentage will be 33
#include <stdio.h>
#include <conio.h>
void main()
{
    float marks;
    int math, eng, science;
    printf("enter the marks in math\n");
    scanf("%d", &math);
    printf("enter the marks in eng\n");
    scanf("%d", &eng);
    printf("enter the marks in science\n");
    scanf("%d", &science);
    marks = (math + eng + science) / 3;
    if ((marks < 40) || math < 33 || eng < 33 || science < 33)
    {
        printf("your percentage is %f ,u are fail", marks);
    }
    else
    {
        printf("your percentage is%f, you are pass", marks);
    }
}