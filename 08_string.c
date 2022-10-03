//concept of string?
#include<stdio.h>

void main(){
    
char str[]= "abhishek";
char *ptr= str;
while(*ptr!= '\0'){
    printf("%c",*ptr);
    *ptr++;
}
}
