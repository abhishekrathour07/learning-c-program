#include<stdio.h> 
#include<string.h> 

void main(){  
  char str[20];


  printf("Enter number: "); 
  scanf( "%s" , str );

  printf("\nReverse Number is: %s",strrev(str));  

}