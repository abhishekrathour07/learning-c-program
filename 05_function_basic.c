//  the concept and types of function
#include<stdio.h>

void display(); //function prototype

int main(){
printf("initializing display\n");
 display();     //function call
 printf("hello its me\n");
 return 0;
}

//function difinition
void display(){
    printf("this is display\n");
}