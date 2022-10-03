// Write a program to change the value of a variables to ten times to his originl value
// write a function and pass Through call By Reference.

#include <stdio.h>
void Tentimes(int *a);

void main()
{
  int i;
  printf("enter the value of i");
  scanf("%d", &i);
  // int *a = &i;
  printf("The value of i before swapping is %d\n", i);
  Tentimes(&i);
  printf("The value of i after swapping is %d\n", i);
}
void Tentimes(int *a)
{
  *a = *a * 10;
}
