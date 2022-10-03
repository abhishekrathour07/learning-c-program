// Write a program to tale 3 values from the file?

#include<stdio.h>

void main(){
    int a,b,c;
    FILE *ptr;
    ptr= fopen("abhishek.txt","r");
    fscanf(ptr,"%d %d %d",&a,&b,&c);
    printf("the value of a,b,c is : %d,%d,%d",a,b,c);
}