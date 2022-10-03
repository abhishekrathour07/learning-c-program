#include<stdio.h>

void main(){
    FILE *ptr;
    int num,num2;
    ptr= fopen("abhishek.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
        fclose(ptr);
    printf("the value of number is %d\n",num);
    printf("the value of number is %d\n",num2);

}