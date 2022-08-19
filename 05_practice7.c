#include<stdio.h>

int main(){
int i=8;
int *j;
j=&i;
printf("address i=%u\n",&i);
printf("address i=%u\n",j);

    return 0;
}