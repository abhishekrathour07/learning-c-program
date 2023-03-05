// Ques no. 3
#include<stdio.h>

void main(){
    int prime =0,i,num;
    printf("Enter the num to check prime");
    scanf("%d",&num);
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("Not a prime number");
            prime =1;
            break;
        }

    }
    if(prime ==0){
        printf("Number is prime");
    }
}