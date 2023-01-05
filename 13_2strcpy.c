#include<stdio.h>

void main()
{
    char str[100],str2[100];
    int i;
    printf("Enter the string");
    gets(str);
    for(i = 0; str[i] != '\0'; i++)
          str2[i] = str[i];
    printf("Copied string = %s",str2);
    
}