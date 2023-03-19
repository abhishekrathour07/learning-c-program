#include<stdio.h>
#include<ctype.h>

void main(){
    char str[30];
    int i;
    printf("Enter the string");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    printf("%c",toupper(str[i]));
}