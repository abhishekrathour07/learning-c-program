#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter the value of A");
    scanf("%d",&a);
    printf("Enter the value of B");
    scanf("%d",&b);
    printf("Enter the value of C");
    scanf("%d",&c);
    if(a>b && a>c)
    printf("%d is largest",a);
   else if (b>a && b>c)
    printf("%d is largest",b);
    else if(c>a && c>b)
    printf("%d is largest",c);
}