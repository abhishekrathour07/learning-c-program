// put two  array  value of array to the third array

#include<stdio.h>

void main(){
 int arr1[5],arr2[5],sumarr[5],i;
 printf("enter the element of Frist array\n");
 for(i=0;i<5;i++){
    scanf("%d",&arr1[i]);
 }
 printf("Enter the element in Second Array\n");
 for(i=0;i<5;i++){
 scanf("%d",&arr2[i]); 
}
 for(i=0;i<5;i++){
  sumarr[i]=arr1[i]+arr2[i];
 printf("The sum of Element of Third Array is :%d\n",sumarr[i]);
}
}