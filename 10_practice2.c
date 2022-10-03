// Write a program to generate multiplication table of a given number in text format.
// Make sure that the file is readable and well formated?
#include<stdio.h>

void main(){
  int num,i;
  FILE *ptr;
  printf("Enter the integer you want to find table");
  scanf("%d",&num);
  ptr= fopen("table.txt","w");
  for(i=1;i<=10;i++){
    fprintf( ptr,"the multiplication table is %d X %d = %d\n",num,i,num*i);
  }
fclose(ptr);
printf("Multiplicatin table of %d is successfully generated", num);
}