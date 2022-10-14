#include<stdio.h>
#include<string.h>

void main()
{
    char *source = "hello_abhishek_ji";
    char target[43] ;
    strcpy(target, source);// --> copy one string to other.
    printf("target is in the %s", target);
}