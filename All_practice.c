#include<stdio.h>
void main(){
    int principal ,rate ,year;
    float simpl =(principal*rate *year )/100;
    printf("Enter the value of principL rate and year");
    scanf("%d %d%d",&principal,&rate,&year);
    printf("SImpleinterest = %f",simpl);
}