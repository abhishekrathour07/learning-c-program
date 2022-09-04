//write a program to convert celcius into forenheit
#include <stdio.h>

int main()
{
    float celcius, farenheit;
    printf("enter the value of celcius");
    scanf("%f", &celcius);
    farenheit = (celcius * 9 / 5) + 32;
    printf("the value of celcius in forenheit is %.3f", farenheit);

    return 0;
}
