// Write a program to take string as a input from the user using %c and %s . confirm that the string are equal.
#include <stdio.h>

void main()
{
  int i = 0;
  char st1[21], st2[32], a;
  printf("Enter the value of frist charcter \n");
  scanf("%s", st1);
  printf("Enter the value of second string charcter by charcter \n");
  while (a != '\n')
  {
    fflush(stdin);
    scanf("%c", &a);
    st2[i] = a;
    i++;
  }
  st2[i] = '\0';
  printf("the value of st1 is %s\n", st1);
  printf("the value of st2 is %s\n", st2);
}