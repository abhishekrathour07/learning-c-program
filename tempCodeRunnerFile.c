#include <stdio.h>

int main ()
{
  int a[5],b[5],i,n,c;
  long f;
  for(c=0;c<5;c++)
  {
  printf( "Enter number %d",c+1," in array a:");
  scanf("%d",&a);
  }
  // find factorial of each element of array 
  for(c=0;c<5;c++)
  {
      n = &a;
      f = 1;
      for(i=1;i<=n;i++)
         f = f * i;  
       // place factorial in array 
       &b = f;
  }      
   // display array
   printf("Array of numbers is : \n============\n");
   for(c=0;c<5;c++)
   printf("%d\t",a);
   printf("\n");  
     // display array 
printf("Array of factorials is : \n===========\n");
   for(c=0;c<5;c++)
   printf("%d\t",b);
  return 0;
}