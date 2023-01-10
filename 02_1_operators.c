#include<stdio.h>
void main(){

int a=2, b=4,c=6,d=8;
d= a++ + b++ + ++b + ++c - --d + ++d +d+a+b+c;
printf("%d",d);
} 