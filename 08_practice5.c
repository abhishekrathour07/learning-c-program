// Write a program to decrypt the program using ascii -1.
#include<stdio.h>
void decrypt(char *c){
   char *ptr= c;
   while(*ptr!= '\0'){
     *ptr = *ptr-1;
     ptr++;
   }
}
void main(){
 char C[] = "ifz!zpvs!nth!jt!fodszqufe";
 decrypt(C);
 printf("encrypted string are %s",C);

}