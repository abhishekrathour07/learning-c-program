#include <stdio.h>
#include <string.h>

void main()
{
    char s1[23] = "abhikesh";
    char *s2 = "abhishek";
    int value = strcmp(s1, s2);
    printf("Now the value is %d", value);
}