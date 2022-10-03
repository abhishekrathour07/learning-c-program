// write a function slice() to slice a string .it should change the original string such that it
// is now the sliced string. take n and m as start and ending position of slice.

#include <stdio.h>
char slice(char *str, int m, int n)
{
    int i = 0;
    while ((m + i) < n)
    {
        str[i] = str[m + i];
        i++;
    }
    str[i] = '\0';
}
int main()
{
    char str[] = "ABHISHEK";
    slice(str, 1, 8);
    printf("%s", str);

    return 0;
}