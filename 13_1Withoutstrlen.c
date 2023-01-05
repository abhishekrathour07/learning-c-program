#include <stdio.h>
int main()
{
char s[100];
int i;

printf("Enter the string");
scanf("%s",s);

for(i = 0; s[i] != '\0'; ++i);

printf("Length of string: %d", i);
return 0;
}
