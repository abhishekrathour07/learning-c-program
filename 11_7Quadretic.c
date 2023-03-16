// Ques no. 7
#include <stdio.h>
#include <math.h>
void main()
{
    float a, b, c, disc, r1, r2;

    printf("Enter three Co-efficient \n");
    scanf("%f%f%f", &a, &b, &c);
    if (a == 0)
        printf("\nNot a Quadratic Equation \n");
    else
    {
        disc = b * b - 4.0 * a * c;
        if (disc < 0.0)
        {
            printf("\nComplex Roots\n");
            disc = -disc;
            r1 = -b / (2.0 * a);
            r2 = sqrt(disc);
            printf("\nDiscriminant = %f", disc);
            printf("\nRoot1 = %f + I %f", r1, r2);
            printf("\nRoot2 = %f - I %f", r1, r2);
        }
        else if (disc == 0.0)
        {
            printf("\nDiscriminant = %f", disc);
            printf("\nReal and Equal Roots");
            r1 = -b / (2.0 * a);
            printf("\nRoot1 = %f \nRoot2 = %f \n", r1, r1);
        }
        else
        {
            printf("\nDiscriminant = %f", disc);
            printf("\nReal and Unequal Roots \n");
            r1 = (-b + sqrt(disc)) / (2.0 * a);
            r2 = (-b - sqrt(disc)) / (2.0 * a);
            printf("\nRoo1 = %f \nRoot2 = %f", r1, r2);
        }
    }
}
