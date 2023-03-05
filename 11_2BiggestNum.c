// Ques No. 2
#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter the value of A");
    scanf("%d",&a);
    printf("Enter the value of B");
    scanf("%d",&b);
    printf("Enter the value of C");
    scanf("%d",&c);
    printf("a=%d\n",a);
    printf("b=%d\n",b);
    printf("c=%d\n",c);

    if(a>b && a>c)
    printf("%d is largest",a);
   else if (b>a && b>c)
    printf("%d is largest",b);
    else if(c>a && c>b)
    printf("%d is largest",c);
    else{
        printf("All have same value");
    }
}