// Write a Program to  count the occurance of a given charcter in string.

#include <stdio.h>
int occurance(char str[], char c)
{
    char *ptr = str;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
void main()
{
    char str[] = "adjgsgudhkhdhfgdugjbfjeryiugudbjsdbhgvvhjgds";
    int count = occurance(str, 'g');
    printf(" occurance =%d", count);
}