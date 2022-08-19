#include <stdio.h>

int main()
{
   int size, max ,i,abhi[100];
   printf("enter the size of array\n");
   scanf("%d",&size);
   printf("enter the element of array\n");
   for(i=0;i<size;i++){
    scanf("%d",&abhi[i]);
   }
   max= abhi[1];
   for(i=0;i<size;i++){
    if(max<abhi[i]){
  max=abhi[i];
    }
   }
    printf("the max value is %d",max);
    return 0;
}
