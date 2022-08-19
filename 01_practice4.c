// write a program to calculate simple interest for a set of value represent principal,n0. of year, rate of interest

#include <stdio.h>

int main(){
    int principal = 1000, year = 3, rate = 10;
    int simpleInterest = (principal * rate * year) / 100;
    printf("simpleInterest of the given data is %d", simpleInterest);
    return 0;
}