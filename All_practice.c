#include<stdio.h>

void main (){

  int t1=0,t2=1,i,n;
  int t3= t1 +t2;
printf("Enter the number of terms\n");
scanf("%d",&n);
printf("fibonacci series are %d,%d,",t1,t2);
for(i=0;i<=n;i++){
printf("%d,",t3);
  t1=t2;
  t2=t3;
  t3=t1+t2;
}

}


