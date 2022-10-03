#include<stdio.h>

void main(){
    int size,arr[100],i,max;
    printf("Enter the sizeof array");
    scanf("%d",&size);
    printf("Elements of array are:\n");
    for(i<0;i<size;i++){
        scanf("%d",&arr[i]);
        max= arr[0];
        if(max<arr[i]);
        max=arr[i]; 
    }
    printf("the max value is:%d",max);
}
