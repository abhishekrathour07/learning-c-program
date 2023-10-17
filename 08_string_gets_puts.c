#include<stdio.h>
#include<string.h>
int main(){
char string[40];
puts("Enter the names"); 
gets(string);
int i = strlen(string);
printf("%d",i);
    return 0;
}