#include <stdio.h>

int main()
{
  int size, max, i, arr[100], min, fact = 1;
  printf("enter the size of array\n");
  scanf("%d", &size);
  printf("enter the element of array\n");
  for (i = 0; i < size; i++)
  {
    max = arr[0];
    min = arr[0];
    scanf("%d", &arr[i]);
    fact = arr[i] * fact;
  }
  for (i = 0; i < size; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
    else if (arr[i] < min)
    {
      min = arr[i];
    }
  }
  printf("the max value is %d\n", max);
  printf("the min value is %d\n", min);
  printf("factorial = %d\n", fact);
}
