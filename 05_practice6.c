// write a recurssion program to find sum of n natural number;
#include <stdio.h>

int sumNumbers(int n){
 if (n != 0){
        return n + sumNumbers(n - 1);
 } 
 else{
         return n ;
}
}
int main()
{
     int num;
          printf("Enter the natural number to find sum of that ");
          scanf("%d", &num);
          printf("Sum of natural number = %d", sumNumbers(num));
          return 0;
}
