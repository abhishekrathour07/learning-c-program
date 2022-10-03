#include<stdio.h>
void main(){
//   int  a= 4, b= 14 ,c =24 ;
//   c = a++ - --b + ++c - b++ - c++ - ++c - a++ - --b - --c;
//  // printf("%d,%d,%d,%d,%d,%d,%d,%d,%d\n",a++,--b,++c,b++,c++,++c,a++,--b,--c);
//   printf ( "%d",c);
int a=2, b=4,c=6,d=8;
d= a++ + b++ + ++b + ++c - --d + ++d +d+a+b+c;
printf("%d",d);
} 