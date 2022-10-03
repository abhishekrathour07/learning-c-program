// Write a program to encrypt a string by adding 1 to the ascii value of it charcter.

#include<stdio.h>
void encrypt(char *c){
   char *ptr= c;
   while(*ptr!= '\0'){
     *ptr = *ptr+1;
     ptr++;
   }
}
void main(){
 char C[] = "hey your msg is encrypted";
 encrypt(C);
 printf("encrypted string are %s",C);

}