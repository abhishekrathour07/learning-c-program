#include <stdio.h>
int main() {
   int arr[20];
   int n;
   int i, j, position, swap;
   printf("Enter the size of an array");
   scanf("%d",&n);
   printf("Enter the element in the array\n");
   for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
   }
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d\t", arr[i]);
   return 0;
}