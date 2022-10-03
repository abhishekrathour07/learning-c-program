#include<stdio.h>

void main(){
//     FILE *ptr;
//     ptr = fopen("getcdemo.txt","r");
//     printf("The value of my charcter is %c\n",fgetc(ptr));
//     printf("The value of my charcter is %c\n",fgetc(ptr));
//     printf("The value of my charcter is %c\n",fgetc(ptr));
//     printf("The value of my charcter is %c\n",fgetc(ptr));
//     printf("The value of my charcter is %c\n",fgetc(ptr));
// fclose(ptr);
FILE *ptr;
ptr =fopen("putcdemo.txt","w");
putc('a',ptr);
putc('b',ptr);
putc('h',ptr);
putc('i',ptr);
fclose(ptr);
}