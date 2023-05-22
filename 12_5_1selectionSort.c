#include <stdio.h>
int main()
{
   int arr[20];
   int n;
   int i, j, temp;
   printf("Enter the size of an array");
   scanf("%d", &n);
   printf("Enter the element in the array\n");
   for (i = 0; i < n; i++)
   {
      scanf("%d", &arr[i]);
   }
   for (i = 0; i < (n - 1); i++)
   {
      for (j = i + 1; j < n; j++)
      {
         if(arr[i]>arr[j]){
            temp = arr[i];
            arr[i] =arr[j];
            arr[j] = temp;
         }
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}