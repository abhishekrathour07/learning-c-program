#include<stdio.h>

void main(){
FILE *ptr;
ptr = fopen("abhishek2.txt","w");
int number =143;
fprintf(ptr,"The vlue of this given number is :%d",number);
fclose(ptr);

}