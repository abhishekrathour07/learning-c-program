// Ques no. 12
#include<stdio.h>

void main(){
    int t1=0,t2=1,t3 =t1+t2;
    int num,i;
    printf("ENter the number of terms");
    scanf("%d",&num);
    printf("Fibo series are %d,%d,",t1,t2);
    for(i=2;i<num;i++){
        printf("%d,",t3);
        t1=t2;
        t2 =t3;
        t3 =t1+t2;
    }

}