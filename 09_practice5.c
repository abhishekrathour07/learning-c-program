//  Write a program of structure to define a complex number using array of 5?
#include<stdio.h>
typedef struct complex{ 
    int real;
    int imagine;
}comp;

int display(comp c){
 printf("The value of real part is %d\n",c.real);
 printf("The value of imagine part is %d\n",c.imagine);
}

void main(){
 comp cnum[5];
for(int i=0;i<5;i++){
printf("Enter the real value for %d num\n",i+1);
scanf("%d", &cnum[i].real);
}
for(int i=0;i<5;i++){
printf("Enter the imagine value for %d num\n",i+1);
scanf("%d", &cnum[i].imagine);
}
for(int i=0;i<5;i++){
display(cnum[i]);
}
}