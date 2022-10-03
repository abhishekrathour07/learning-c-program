#include<stdio.h>

void main(){
    int a[] = {2,3,3,4,44,55,667,7,77,7,77,766,6,55,5,5,55,55,55,544,44,4,33,3,3,33,34,4,55,55,5,5,5};
    int count = sizeof(a)/sizeof(a[0]);
    printf("the size of the array is %d",count);
}