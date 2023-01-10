//find area of cylinder and circle

#include <stdio.h>

int main()
{
    int r = 4;
    float pie = 3.14;
    int h = 3;
    printf("area of the circle is %f\n", pie * r * r);
    printf("Area of the cylinder is %f\n", pie * r * r * h);
    printf("The address is %u\n",&r);
    printf("The address is %u\n",&pie);
    printf("The address is %u\n",&h);
    return 0;
} 