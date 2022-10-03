#include <stdio.h>
#include <string.h>
void main()
{
    char string1[43]= "Boliye ";
    char *string2 = "abhishek ji ki jai";
    strcat(string1, string2);
    printf(" bs yhi hai jiwan ka raj toh %s",string1);
}