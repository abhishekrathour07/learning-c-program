#include <stdio.h>
#include <string.h>
void main()
{
    char string1[43]= "Boliye ";
    // char *string2 = "jai shree";
    strcat(string1, "ka boli mardwa"); // -->adding value on string
    strcat(string1, ", Ram ji ki jai bola ho");
    printf(" string1 = %s\n",string1);
  

}