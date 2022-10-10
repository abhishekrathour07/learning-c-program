#include<stdio.h>

void main(){
    int i =6;
    int *j ,**k;
    j=&i ;k=&j;
     sizeof(i);
     sizeof(k);
     sizeof(k);
printf("size of i is :%d",sizeof(i));
printf("size of j is :%d",sizeof(j));
printf("size of k is :%d",sizeof(k));

    
    printf("The value of i Is  %d : ",i);

    printf("The value of  i is %d\n", *j);
    printf("The address of  i is %d\n", j);
    printf("The address of  j is %d\n",&j);
    printf("The address of  k is %d\n",&k);


}