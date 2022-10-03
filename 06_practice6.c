#include <stdio.h>
void wrong_Tentimes(int a);

void main()
{
  int i;
  printf("enter the value of i");
  scanf("%d", &i);
  // int *a = &i;
  printf("The value of i before swapping is %d\n", i);
  wrong_Tentimes(&i);
  printf("The value of i after swapping is %d\n", i);
}
void wrong_Tentimes(int a)
{
  a = a * 10;
}