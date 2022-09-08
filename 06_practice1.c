// Write a program to print address  of the veriable .Use this program to find value of the variables?
#include<stdio.h>

int main(){
int a=4 , *b=&a;
printf("The value of a is %d\n",a);
printf("The value of a is %d\n",*b);
printf("The address of a is %u\n",b);
    return 0;
}