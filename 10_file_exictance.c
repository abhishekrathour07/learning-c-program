#include<stdio.h>

void main(){
    FILE *ptr;
    int num1,num2;
    ptr=fopen("abhishek2.txt","r");
    if(ptr==NULL){
        printf("This file does not exists");
        }
        else {
            fscanf(ptr,"%d",&num1);
            fscanf(ptr,"%d",&num2);
            fclose(ptr);
            printf("the number is %d\n",num1);
            printf("the number is %d\n",num2);
    }
}