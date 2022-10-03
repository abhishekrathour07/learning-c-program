#include <stdio.h>

void main()
{
    int s1, s2, s3, s4, s5;
    float total, per;
    printf("Enter marks in eng");
    scanf("%d", &s1);
    printf("Enter marks in hindi");
    scanf("%d", &s2);
    printf("Enter marks in math");
    scanf("%d", &s3);
    printf("Enter marks in evs");
    scanf("%d", &s4);
    printf("Enter marks in DS");
    scanf("%d", &s5);
    total = s1 + s2 + s3 + s4 + s5;
    per = (total / 500) * 100;
    if ((per <= 40) || s1 <= 40 || s2 <= 40 || s3 <= 40 || s4 <= 40 || s5 <= 40)
        printf(" your per is %f****FAIL*****", per);
    else if (per <= 50)
        printf("youe per is %f****grade c*****", per);
    else if (per <= 60)
        printf("your per is %f ****grade b*****", per);
    else if (per <= 70)
        printf("your per is %f****grade a*****", per);
    else if (per <= 80)
        printf(" your per is %f****TOPPER*****", per);
}