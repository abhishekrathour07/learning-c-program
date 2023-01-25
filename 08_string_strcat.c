#include <stdio.h>
#include <string.h>
void main()
{
    char string1[43]= "Boliye ";
    // char *string2 = "jai shree";
    strcat(string1, "jai shree"); // -->adding value on string
    strcat(string1, ", Ram");
    printf(" string1 = %s\n",string1);
  

}