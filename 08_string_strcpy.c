#include<stdio.h>
#include<string.h>

void main()
{
    char *source = "hello_abhishek_ji";
    char target[43] ;
    char str[] = "12345";
    strcpy(target, source);
    strrev(str);
     puts(str);         // --> copy one string to other.
    printf("target is in the %s", target);
}