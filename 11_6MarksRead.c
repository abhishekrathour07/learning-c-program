// Ques no. 6
#include <stdio.h>

void main()
{
    int s1, s2, s3, s4, s5;
    float total, per;
    printf("Enter the marks in PST");
    scanf("%d", &s1);
    printf("Enter the marks in DS");
    scanf("%d", &s2);
    printf("Enter the marks in Hindi");
    scanf("%d", &s3);
    printf("Enter the marks in English");
    scanf("%d", &s4);
    printf("Enter the marks in Math");
    scanf("%d", &s5);
    total = s1 + s2 + s3 + s4 + s5;
    per = total / 5;
    if (per < 40)
        printf("Your percentage is %f and you are fail", per);
    else if (per >= 40 && per <= 50)
        printf("Your percentage is %f and Your grade is d", per);
    else if (per >= 50 && per <= 60)
        printf("Your percentage is %f and Your grade is c", per);
    else if (per >= 60 && per <= 70)
        printf("Your percentage is %f and Your grade is b", per);
    else if (per >= 70 && per <= 85)
        printf("Your percentage is %f and Your grade is A", per);
    else if (per >= 85 && per <= 100)
        printf("Your percentage is %f **DISTICTION**", per);
   
}