// write a program to find fabonacci series .

#include<stdio.h>

int main(){
int n,t1=0,t2=1,t3,i;
t3= t1+t2;
printf("enter the no. of terms");
scanf("%d",&n);
printf("fabonacci series is %d,%d,",t1,t2);
for(i=2;i<n;i++){
  printf("%d,",t3);
  t1=t2;
  t2=t3;
  t3= t1+t2;
}
  return 0;
}
