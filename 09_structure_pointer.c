#include<stdio.h>
#include<string.h>

struct  employee{
     char name[20];
   int sallery;
    float emp_Id  ;
};

void main(){
 struct employee e1;
  struct employee *ptr;
  ptr= &e1;
    //  ( *ptr).sallery = 63256; //or we can write ptr->sallery=63256
     ptr->sallery=63256; // "->" This is  called arrow operator.
     printf("%d",e1.sallery);
}