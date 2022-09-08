// 

#include<stdio.h>
int sum(int a,int b){
  return a+b;

}
int avg(int i, int j ){
   return i+j/2;
   
}
void main(){
int a=10,b=20;
printf("the sum is %d\n" ,sum(a,b));
printf("the avg is %d\n" , avg(a,b));
}