//Write  a program of variable i ,find the address of i and pass the value of i through function 
// are the  address of both varibles are same. 

#include<stdio.h>
void print_Add(int a);
int main(){
int i=7;
printf("The value  of  varible i is %u\n",i);
print_Add(i);
printf("the  Address of variable i is %u\n",&i);
    return 0;
}
void print_Add(int a){
    printf("The address of variable a is %u\n",&a);
}
