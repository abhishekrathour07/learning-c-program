//WRITE a program using functioon to find average of three numbers.

#include<stdio.h>
float average (int a, int b, int c){
    float result =(float)(a+b+c)/3;
return result;
}

int main(){
int x,y,z;
printf("enter the value of (x) average\n");
scanf("%d",& x);
printf("enter the value of (y) average\n");
scanf("%d",& y);
printf("enter the value of (z) average\n");
scanf("%d",& z);
printf("the average is %.3f\n",average(x,y,z));
    return 0;
}





