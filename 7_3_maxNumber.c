#include <stdio.h>

int main()
{
   int size, max ,i,arr[100];
   printf("enter the size of array\n");
   scanf("%d",&size);
   printf("enter the element of array\n");
   for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
   }
   max= arr[0];
   for(i=0;i<size;i++){
    if(max<arr[i]){
  max=arr[i];
    }
   }
    printf("the max value is %d",max);
    return 0;
}
